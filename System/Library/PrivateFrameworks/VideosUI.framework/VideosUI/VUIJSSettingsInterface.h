@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (id)deniedBrands;
- (BOOL)sportsScoreSpoilersAllowed;
- (id)consentedBrands;
- (void)dealloc;
- (BOOL)privateModeEnabled;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (id)appSettingsByChannelID;
- (void)forceUpdateWithCallback:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (void)updateFeaturesConfiguration:(id)a0;
- (id)wlkOverrides;

@end
