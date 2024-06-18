@interface AccessibilitySettingsLoader : NSObject

+ (void)updateITunesSettings;
+ (void)_registerSpeakThisNotificationListeners;
+ (void)_registerZoomNotificationListeners;
+ (void)initialize;
+ (void)_updateAssistiveTouchInformation;
+ (BOOL)_isAXUIServer;
+ (void)_resetD22ReduceMotion;
+ (void)_updateAccessibilitySpeakCorrections;
+ (void)update;
+ (void)_updateITunesSettings;
+ (void)_update;

- (id)init;
- (void)_accessibilityUserChangedRouteNotification:(id)a0;
- (void)_initializeDelayedAccessibilitySettings;
- (void)_initializeImmediateAccessibilitySettings;
- (void)_loadSystemAppResourceAndContinueWith:(id /* block */)a0;
- (void)_webKitInitialized;

@end
