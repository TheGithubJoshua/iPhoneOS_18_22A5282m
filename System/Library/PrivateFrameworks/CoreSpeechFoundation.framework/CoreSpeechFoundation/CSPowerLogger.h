@interface CSPowerLogger : NSObject

+ (id)sharedPowerLogger;

- (void)powerLogVoiceTriggerStop;
- (void)_updateConfigToPreferencesWithLanguage:(id)a0 withModelVersion:(id)a1;
- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(BOOL)a0 withLanguage:(id)a1 withModelVersion:(id)a2;
- (void)powerLogVoiceTriggerStart;
- (void)_configPowerlog:(id)a0;
- (void)_borealisPowerlog:(id)a0;
- (void)powerWithNumFalseWakeup:(unsigned long long)a0 withDuration:(double)a1 withPhraseDict:(id)a2;
- (void)powerLogSecondPassWithResult:(unsigned long long)a0 withSecondPassScore:(float)a1 withPhId:(unsigned long long)a2;

@end
