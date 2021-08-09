# UserWise Unity SDK Example

This repository hosts an example unity game running the latest UserWise SDK release. Information on learning how to properly integrate with the SDK can be found in the documentation link below.

## How to Install

### Unity Package Manager

You can quickly install the UserWise SDK without interferring with your project's source code, via use of the UPM (Unity Package Manager).

1. Within your Unity Editor; click `Window > Package Manager`
2. Click the "+" icon at the top-left of the window -- directly under the tab labelled "Package Manager"
3. Click the "Add package from git URL"
4. Type in: `git://github.com/UserWise/userwise_unity_example#latest`

### *.unitypackage (Old)

If the UPM method above does not work for your game, you can always import the unitypackage that we provide at the root of this repository.

To install the old unitypackage style, just download the archive, open your Unity project, and double-click to have Unity manage the importing of our SDK assets into your game's source.

## Links:
- [UserWise Unity SDK Documentation](https://docs.userwise.io/#unity-sdk)
- [UserWise Android SDK](https://github.com/UserWise/userwise_android_example)
- [UserWise iOS SDK](https://github.com/UserWise/userwise_ios_example)

## SDK Version Changelog
### v2.1.4
- Released tweak the the `UserWisePostBuildProcessor.cs` script for better iOS framework embedding & signing.

### v2.1.3
- Fixed a Triggered Campaign issue causing triggering to occur event when event attribute or region metadata logic failed verification.

### v2.1.2
- Fixed survey entry bug on android
- Fixed an on-device caching issue for new players
- Fixed a bug that caused constantly running content (e.g. Scheduled without an end date) to be stopped immediately
- Updated to v2.1.1 of the Android SDK

### v2.1.1
- Fixed a bug that caused the survey screen to attempt to load (and fail) when the survey invite was declined

### v2.1.0
- Added Push Notification support for both Android & iOS
- Added Client-Side content scheduling support, for in-game session start/stopping of content

### v2.0.2
- Included the new Triggered Campaigns feature; primarily introduced as background-only logic within the SDK

### v2.0.1
- Bug fix. Session IDs were not being sent to the UserWise API

### v2.0.0
- Updated to v2.0.1 of the UserWise Android SDK; for WebView layers
- Updated to v2.0.1 of the UserWise iOS SDK; for WebView layers
- Feature parity with v2.0.1 of both SDKs
  - Added EventsModule
  - Added VariablesModule
  - Added MessagesModule
  - Updated OffersModule, bringing feature parity inline with Android & iOS
  - Updated SurveysModule, bringing feature parity inline with Android & iOS

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

