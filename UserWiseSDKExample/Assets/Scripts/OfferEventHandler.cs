using System;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Offers;

public static class OfferEventHandler
{
    public static void OnOffersUnavailable(object sender, EventArgs args)
    {
        Debug.Log("[UW Example]: No offers are currently available to take.");
    }

    public static void OnOfferAvailable(object sender, OfferIdEventArgs args)
    {
        Debug.Log("[UW Example]: An offer is available! offer_id=" + args.OfferId);
        UserWise.INSTANCE.offersModule.InitializeOfferImpression(args.OfferId);
    }

    public static void OnOfferImpressionInitializationFailed(object sender, OfferIdEventArgs args)
    {
        Debug.Log("[UW Example]: Offer impression initialization failed. offer_id=" + args.OfferId);
    }

    public static void OnOfferImpressionInitialized(object sender, OfferImpressionEventArgs args)
    { 
        Debug.Log("[UW Example]: Offer impression initialization failed. offer_impression_id=" + args.OfferImpression.id);
        UserWise.INSTANCE.offersModule.ShowOffer(args.OfferImpression);
    }

    public static void OnOfferViewAttemptFailed(object sender, OfferViewAttemptFailedEventArgs args)
    {
        Debug.Log("[UW Example]: Offer failed to load properly. ");
    }

    public static void OnOfferViewed(object sender, OfferImpressionEventArgs args)
    {
        Debug.Log("[UW Example]: Offer has loaded and is actively visible! offer_impression_id=" + args.OfferImpression.id);
    }

    public static void OnOfferDismissed(object sender, OfferImpressionEventArgs args)
    {
        Debug.Log("[UW Example]: Offer has been dismissed by the user! offer_impression_id=" + args.OfferImpression.id);
    }

    public static void OnOfferAccepted(object sender, OfferImpressionEventArgs args)
    {
        Debug.Log("[UW Example]: Offer was accepted! offer_impression_id=" + args.OfferImpression.id);

        OfferImpression offerImpression = args.OfferImpression;

        string androidId = offerImpression.offer.androidProductId;
        string iOSId = offerImpression.offer.iOSProductId;
        Dictionary<string, int> bundleContent = offerImpression.offer.currencies;

        // Once an offer has been accepted the itself impression will stay in a state of "accepted"
        // on the UserWise servers.  There are currently two possible states beyond "accepted":
        //   - PURCHASED
        //   - PURCHASE_FAILED
        //
        // You can update to these states through the OfferImpression#updateState() method.
        //
        // Examples:

        // 1. You display the buy screen. User purchases. You call:
        offerImpression.UpdateState(OfferImpressionState.purchased);

        // 2. The purchase process fails in any form. You'd call:
        //offerImpression.UpdateState(OfferImpressionState.purchase_failed);
    }
}
