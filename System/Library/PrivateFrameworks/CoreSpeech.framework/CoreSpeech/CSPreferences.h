@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)twoShotNotificationEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (float)getAttendingTimeoutConfig;
- (id)voiceTriggerAudioLogDirectory;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)isPHSSupported;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (id)trialBaseAssetDirectory;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)isAttentiveSiriEnabled;

@end
