# UserWise Unity SDK Example

This repository hosts an example unity game running the latest UserWise SDK release. Information on learning how to properly integrate with the SDK can be found in the documentation link below.

## Links:
- [UserWise Unity SDK Documentation](https://docs.userwise.io/#unity-sdk)
- [UserWise Android SDK](https://github.com/UserWise/userwise_android_example)
- [UserWise iOS SDK](https://github.com/UserWise/userwise_ios_example)

## SDK Version Changelog
### v2.0.0
- Updated to v2.0.1 of the UserWise Android SDK
- Updated to v2.0.1 of the UserWise iOS SDK
- Feature parity with v2.0.1 of both SDKs
  - Added EventsModule
  - Added VariablesModule
  - Added MessagesModule
  - Updated OffersModule
  - Updated SurveysModule

### v1.2.4
- Updated to v1.2.3 Android SDK release
- Updated platform signature

### v1.2.2
- Updated to the v1.2.2 iOS SDK release

### v1.2.1
- Improved the iOS post process building by auto-embedding the UserWise SDK
- Updated to the v1.2.1 iOS SDK

### v1.2.0
- Brings the Unity SDK inline with the Android and iOS SDKs (was lagging behind)
- Added support for assigning events and event attributes an app user in-game.
- Added new'-ish' survey invite / entry flow (released in 1.1.0 of iOS and Android / server-side sdk api)
- Added OnStart and OnStop lifecycle methods so you can now better control the flow of the UserWise SDK
- Added better survey polling performance through intervaled coroutines

### v1.0.0
- Initial Live-Ready Release

