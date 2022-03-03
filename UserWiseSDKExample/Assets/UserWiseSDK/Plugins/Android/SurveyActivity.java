package io.userwise.userwise_sdk;

import android.annotation.SuppressLint;                                                                                  
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.http.SslError;
import android.os.Build;
import android.os.Bundle;                                                                                                
import android.view.Gravity;                                                                                             
import android.view.View;                                                                                                
import android.view.ViewGroup;                                                                                           
import android.webkit.*;                                                                                                 
import android.widget.*;
import com.unity3d.player.UnityPlayer;

import java.util.logging.Level;
import java.util.logging.Logger;

public class SurveyActivity extends Activity {

    public static String INTENT_SURVEY_URL = "survey_url";                                                               
    public static String INTENT_RESPONSE_ID = "survey_response_id";                                                      
    public static AndroidToUnityBridge unityBridge;                                                                      
                                                                                                                         
    private JSBridge jsBridge;                                                                                           
                                                                                                                         
    private String surveyUrl;                                                                                            
    private String responseId;                                                                                           
    private LinearLayout rootLayout;                                                                                     
    private WebView webView;                                                                                             
                                                                                                                         
    @Override protected void onCreate(Bundle savedInstanceState) {                                                       
        super.onCreate(savedInstanceState);

        Intent intent = getIntent();                                                                                     
                                                                                                                         
        this.surveyUrl = intent.getStringExtra(SurveyActivity.INTENT_SURVEY_URL);                                        
        this.responseId = intent.getStringExtra(SurveyActivity.INTENT_RESPONSE_ID);                                      
                                                                                                                         
        this.rootLayout = this.buildRootLayoutView();                                                                    
        this.webView = this.buildWebView();                                                                              
        this.rootLayout.addView(this.webView);                                                                           
                                                                                                                         
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) {                                                     
            getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);                            
        }

        setContentView(this.rootLayout);
    }
                                                                                                                         
    @Override protected void onStart() {                                                                                 
        super.onStart();

        if (this.webView == null || this.surveyUrl == null || this.surveyUrl.isEmpty()) {
            this.finish();                                                                                               
            return;                                                                                                      
        }

        this.webView.loadUrl(this.surveyUrl);
    }

    @Override protected void onStop() {                                                                                  
        super.onStop();                                                                                                  
        this.onSurveyClosed();                                                                                           
    }                                                                                                                    
                                                                                                                         
    @Override public void onBackPressed() { }                                                                            
                                                                                                                         
    void onPageLoadFailed() {                                                                                            
        if (SurveyActivity.unityBridge != null) {                                                                        
            SurveyActivity.unityBridge.onSurveyEnterFailed(this.responseId);                                             
        }                                                                                                                
                                                                                                                         
        this.finish();                                                                                                   
    }                                                                                                                    
                                                                                                                         
    void onSurveyCompleted() {                                                                                           
        if (SurveyActivity.unityBridge != null) {                                                                        
            SurveyActivity.unityBridge.onSurveyCompleted(this.responseId);                                               
        }                                                                                                                
    }                                                                                                                    
                                                                                                                         
    void onSurveyClosed() {                                                                                              
        if (SurveyActivity.unityBridge != null) {                                                                        
            SurveyActivity.unityBridge.onSurveyClosed(this.responseId);                                                  
        }

        this.finish();                                                                                                   
    }                                                                                                                    
                                                                                                                         
    private LinearLayout buildRootLayoutView() {                                                                         
        LinearLayout rootLayout = new LinearLayout(this);

        rootLayout.setGravity(Gravity.CENTER);                                                                           
        rootLayout.setOrientation(LinearLayout.VERTICAL);                                                                
        rootLayout.setLayoutParams(new ViewGroup.LayoutParams(                                                           
                ViewGroup.LayoutParams.MATCH_PARENT,                                                                     
                ViewGroup.LayoutParams.MATCH_PARENT                                                                      
        ));

        return rootLayout;                                                                                               
    }                                                                                                                    
                                                                                                                         
    @SuppressLint("SetJavaScriptEnabled")                                                                                
    private WebView buildWebView() {
        WebView webView = new WebView(this);

        webView.getSettings().setDomStorageEnabled(true);
        webView.getSettings().setJavaScriptEnabled(true);
        webView.setWebViewClient(new WebViewClient(this));
        webView.setLayoutParams(new ViewGroup.LayoutParams(
            ViewGroup.LayoutParams.MATCH_PARENT,                                                                         
            ViewGroup.LayoutParams.MATCH_PARENT                                                                          
        ));

        this.jsBridge = new JSBridge(this);
        webView.addJavascriptInterface(this.jsBridge, "UserWiseAndroidBridge");

        return webView;                                                                                                  
    }                                                                                                                    
                                                                                                                         
    public static void newIntent(String surveyUrl, String surveyResponseId) {
        Activity activityCtx = UnityPlayer.currentActivity;

        Intent intent = new Intent(activityCtx, SurveyActivity.class);
        intent.putExtra(INTENT_RESPONSE_ID, surveyResponseId);                                                           
        intent.putExtra(INTENT_SURVEY_URL, surveyUrl);
        activityCtx.startActivity(intent);
    }                                                                                                                    
                                                                                                                         
    public static void setSurveyUnityBridge(AndroidToUnityBridge unityBridge) {                                          
        SurveyActivity.unityBridge = unityBridge;                                                                        
    }                                                                                                                    
}

                                                                                                                         
class WebViewClient extends android.webkit.WebViewClient {

    private final SurveyActivity activity;

    WebViewClient(SurveyActivity activity) {                                                                             
        this.activity = activity;                                                                                        
    }

    @Override public void onReceivedHttpError(WebView view, WebResourceRequest request, WebResourceResponse response) {  
        super.onReceivedHttpError(view, request, response);                                                              
        this.activity.onPageLoadFailed();                                                                                
    }                                                                                                                    
}

                                                                                                                         
class JSBridge {

    private final SurveyActivity activity;                                                                               
                                                                                                                         
    JSBridge(SurveyActivity activity) {                                                                                  
        this.activity = activity;                                                                                        
    }                                                                                                                    
                                                                                                                         
    @JavascriptInterface                                                                                                 
    public void postMessage(String msg) {                                                                                
        if (msg.equals("survey_force_closed")) {                                                                         
            this.activity.onSurveyClosed();                                                                              
        } else if (msg.equals("survey_completed")) {                                                                     
            this.activity.onSurveyCompleted();                                                                           
        }                                                                                                                
    }                                                                                                                    
}

                                                                                                                         
