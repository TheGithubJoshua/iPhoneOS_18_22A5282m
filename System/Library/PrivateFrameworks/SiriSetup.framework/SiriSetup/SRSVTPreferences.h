@class VTPreferences;

@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}

- (BOOL)voiceTriggerEnabled;
- (id)init;
- (void).cxx_destruct;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (void)setVoiceTriggerDuringPhoneCallEnabled:(BOOL)a0;
- (BOOL)voiceTriggerDuringPhoneCallEnabled;

@end
