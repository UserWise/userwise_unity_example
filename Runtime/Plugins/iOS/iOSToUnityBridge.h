#ifndef iOSToUnityBridge_h
#define iOSToUnityBridge_h

#import "./iOSToUnityBridgeProtocol.h"
#import "./Utility.h"
#import "./Surveys.h"

@interface iOSToUnityBridge : NSObject <iOSToUnityBridgeProtocol>
@property (strong, nonatomic) NSString * _Nonnull gameObjectName;

@end

#endif
