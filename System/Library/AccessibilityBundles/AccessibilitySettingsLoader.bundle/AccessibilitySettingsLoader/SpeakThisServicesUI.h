@interface SpeakThisServicesUI : NSObject

+ (void)disableSpeakThisServices;
+ (void)enableSpeakThisServices;

- (id)init;
- (void)_unregisterForKBFrameNotifications;
- (void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)a0;
- (void)_kbFrameWillChange:(id)a0;
- (void)_registerForKBFrameNotifications;

@end
