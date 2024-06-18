@interface IMServiceAgentImpl : IMServiceAgent

+ (id)imageNameForStatus:(unsigned long long)a0;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (id)notificationCenter;
+ (void)initialize;
+ (void)_determineStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (void)forgetStatusImageAppearance;
+ (id)sharedAgent;

- (id)init;
- (void)_statusImageAppearanceChanged:(id)a0;
- (id)notificationCenter;
- (id)serviceWithName:(id)a0;
- (void)_daemonDisconnected:(id)a0;
- (void)dealloc;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)setupComplete;
- (unsigned long long)vcCapabilities;
- (void)_customMessagesChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;

@end
