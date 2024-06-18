@interface CSFPreferences : NSObject

+ (id)sharedPreferences;

- (id)readSpeakerIdScoreOverrrideConfig;
- (BOOL)voiceTriggerEnabled;
- (id)ssvLogDirectory;
- (double)remoteVoiceTriggerDelayTime;
- (void)setFileLoggingLevel:(id)a0;
- (BOOL)audioInjectionEnabled;
- (float)overwritingRemoteVADScore;
- (unsigned long long)maxNumGradingFiles;
- (BOOL)isModelBenchmarkingEnabled;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (BOOL)getBooleanAccessorySettingValueForKey:(id)a0 forAccessory:(id)a1;
- (void)setFakeHearstModelPath:(id)a0;
- (id)audioInjectionFilePath;
- (id)assistantAudioFileLogDirectory;
- (id)mhLogDirectory;
- (void)clearMediaPlaybackInterruptedTimeOnAccessory:(id)a0;
- (void)setSelfTriggerEnabledAccessory:(BOOL)a0;
- (double)getMediaPlaybackInterruptedTime:(id)a0;
- (BOOL)isAdBlockerAudioLoggingEnabled;
- (void)setBooleanAccessorySettingValue:(BOOL)a0 forKey:(id)a1 forAccessory:(id)a2;
- (BOOL)programmableAudioInjectionEnabled;
- (BOOL)isMediaPlayingOnAccessory:(id)a0;
- (BOOL)opportuneSpeakListenerBypassEnabled;
- (BOOL)shouldOverwriteRemoteVADScore;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (double)audioSessionActivationDelay;
- (BOOL)phraseSpotterEnabled;
- (unsigned long long)maxNumLoggingFiles;
- (id)fakeMitigationAssetPath;
- (BOOL)secondPassAudioLoggingEnabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)forceVoiceTriggerAOPMode;
- (BOOL)startOfSpeechAudioLoggingEnabled;
- (BOOL)isSelfTriggerFileLoggingEnabled;
- (id)myriadHashDirectory;
- (id)interstitialAbsoluteDirForLevel:(long long)a0;
- (void)_updatePreferenceSettingsForAccessory:(id)a0 settingsUpdateBlock:(id /* block */)a1;
- (void)setSiriLanguageCodeDarwin:(id)a0;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (void)clearTimerPlayingStatusOnAccessory:(id)a0;
- (BOOL)isVoiceTriggerAssetOverridingEnabled;
- (id)languageCodeDarwin;
- (BOOL)smartSiriVolumeContextAwareLoggingEnabled;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)myriadFileLoggingEnabled;
- (void)setHearstFirstPassModelVersion:(id)a0;
- (BOOL)isEndpointAssetOverridingEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)enableProgrammableAudioInjection:(BOOL)a0;
- (void)setHearstSecondPassModelVersion:(id)a0;
- (BOOL)_isAdaptiveSiriVolumeDisabled;
- (id)remoteGradingDataDirectory;
- (void)setIdleUserPreventSleepAssertionAcquitionDate:(id)a0;
- (void)setIsTimerPlayingOnAccessory:(id)a0 isTimerPlaying:(BOOL)a1;
- (BOOL)companionSyncVoiceTriggerUtterancesEnabled;
- (BOOL)smartSiriVolumeSoftVolumeEnabled;
- (BOOL)speakerRecognitionAudioLoggingEnabled;
- (BOOL)firstPassDebuggingEnabled;
- (BOOL)isTimerPlayingOnAccessory:(id)a0;
- (BOOL)isReducedPHSThresholdEnabled;
- (BOOL)isP2PTransferEnabled;
- (void)setPowerLoggingCurrentLanguage:(id)a0;
- (BOOL)_storeModeEnabled;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isMitigationAssetOverridingEnabled;
- (void)setASVUserIntent:(id)a0;
- (id)powerLoggingCurrentAssetConfigVersion;
- (void)setMediaPlayingSettingForAccessory:(id)a0 isMediaPlaying:(BOOL)a1 isInterrupted:(BOOL)a2 interruptedTime:(double)a3;
- (float)getAttendingTimeoutConfig;
- (BOOL)overwritingVoiceTriggerMLock;
- (BOOL)enableAudioInjection:(BOOL)a0 withKey:(struct __CFString { } *)a1;
- (BOOL)audioInjectionEnabledWithKey:(struct __CFString { } *)a0;
- (id)voiceTriggerAudioLogDirectory;
- (void)clearAlarmPlayingStatusOnAccessory:(id)a0;
- (void)getASVUserIntent:(id)a0;
- (id)powerLoggingCurrentLanguage;
- (BOOL)bypassPersonalizedHeySiri;
- (id)fakeHearstModelPath;
- (void)_clearAccessorySettingForKeys:(id)a0 forAccessory:(id)a1;
- (BOOL)jarvisAudioLoggingEnabled;
- (void)setRemoteDarwinEverConnectedWithNotifyKey:(const char *)a0;
- (long long)geckoLoggingLevel;
- (id)geckoAudioLogDirectory;
- (BOOL)isMphVTEnabled;
- (id)fakeEndpointAssetPath;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)isMultiChannelAudioLoggingEnabled;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)a0;
- (void)setVoiceTriggerEverUsed;
- (BOOL)useSiriActivationSPIForwatchOS;
- (BOOL)forceVoiceTriggerAPMode;
- (BOOL)isEndpointEnhancedLoggingEnabled;
- (unsigned long long)speakerIdScoreReportingType;
- (BOOL)personalizedSiriEnrollmentAudioLoggingEnabled;
- (BOOL)isSpeakerRecognitionAvailable;
- (void)setJarvisTriggerMode:(long long)a0;
- (BOOL)_isDirectory:(id)a0;
- (id)getIdleUserPreventSleepAssertionAcquitionDate;
- (id)myriadHashFilePath;
- (id)interstitialRelativeDirForLevel:(long long)a0;
- (id)getSSVLogFilePathWithSessionIdentifier:(id)a0;
- (BOOL)shouldOverwriteVoiceTriggerMLock;
- (BOOL)bypassSpeakerIdForMitigation;
- (BOOL)isPHSSupported;
- (BOOL)useSiriActivationSPIForHomePod;
- (void)clearMyriadSettingsOnAccessory:(id)a0;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (void)setPowerLoggingCurrentAssetConfigVersion:(id)a0;
- (BOOL)forceMitigateForHybridSDSD;
- (BOOL)useSpeexForAudioInjection;
- (void)clearMediaPlayingStatusOnAccessory:(id)a0;
- (id)remoteP2pLogDirectory;
- (id)fileLoggingLevel;
- (void)setIsAlarmPlayingOnAccessory:(id)a0 isAlarmPlaying:(BOOL)a1;
- (void)setIsMediaPlayingOnAccessory:(id)a0 isMediaPlaying:(BOOL)a1 isInterrupted:(BOOL)a2 interruptedTime:(double)a3;
- (BOOL)isAlarmPlayingOnAccessory:(id)a0;
- (id)assistantLogDirectory;
- (id)baseDir;
- (BOOL)bypassTrialAssets;
- (void)enableEndpointEnhancedLogging:(id)a0;
- (BOOL)isEndpointAssetBypassTrialEnabled;
- (BOOL)isSelfTriggerEnabledAccessory;
- (id)trialBaseAssetDirectory;
- (id)fakeVoiceTriggerAssetPath;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (long long)getJarvisTriggerMode;
- (BOOL)fileLoggingIsEnabled;

@end