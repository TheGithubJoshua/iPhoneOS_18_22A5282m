@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (void)setVoiceOverTapticChimesSoundType:(long long)a0;
- (BOOL)_npsBoolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setVoiceOverTapticTimeMode:(BOOL)a0;
- (id)localizedStringForTapticTimeEncoding:(long long)a0;
- (BOOL)voiceOverTapticTimeMode;
- (void)setTapToSpeakTimeAvailability:(long long)a0;
- (BOOL)voiceOverTapticChimesEnabled;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)a0;
- (id)_npsValueForPreferenceKey:(id)a0;
- (long long)tapToSpeakTimeAvailability;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)tapticChimesLocalizedCurrentFrequency;
- (id)tapticChimesSoundsOptions;
- (id)tapticChimesLocalizedDescription;
- (id)tapticTimeLocalizedDescription;
- (id)tapticChimesLocalizedCurrentSounds;
- (id)tapticChimesLocalizedTitle;
- (long long)_npsIntegerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)a0;
- (id)tapticTimeLocalizedTitle;
- (id)accessibilityDomainAccessor;
- (id)tapToSpeakAvailabilityOptions;
- (void)setVoiceOverTapticTimeEncoding:(long long)a0;
- (long long)voiceOverTapticTimeEncoding;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)a0;
- (id)tapToSpeakTimeLocalizedTitle;
- (BOOL)tapToSpeakTimeEnabled;
- (void)setTapToSpeakTimeEnabled:(BOOL)a0;
- (id)tapticChimesFrequencyOptions;
- (id)localizedStringForKey:(id)a0;
- (id)tapticTimeLocalizedCurrentMode;
- (BOOL)_voiceOverIsInTripleClick;
- (id)tapticChimesScheduleLocalizedTitle;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (long long)voiceOverTapticChimesSoundType;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)a0;
- (BOOL)_voiceOverIsEnabled;
- (id)localizedStringForTapticChimesSoundType:(long long)a0;
- (void)_setNPSValue:(id)a0 preferenceKey:(id)a1;
- (id)tapticTimeModeLocalizedDescription;
- (id)tapticTimeEncodingOptions;
- (id)_npsValueForPreferenceKey:(id)a0 expectedClass:(Class)a1;
- (id)tapticChimesSoundsLocalizedTitle;

@end
