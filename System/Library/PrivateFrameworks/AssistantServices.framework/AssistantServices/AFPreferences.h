@class NSMutableArray, AFPreferencesNotificationCenter, AFInstanceContext, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface AFPreferences : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForInternalPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForLanguageCode;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForOutputVoice;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForNanoPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForAssistantEnablement;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForDictationEnablement;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
    long long _tlsSessionTicketFlushRequestPending;
    AFInstanceContext *_instanceContext;
    AFPreferencesNotificationCenter *_trampoline;
    NSLock *_trampolineObserverListLock;
    NSMutableArray *_trampolineObservers;
}

+ (id)sharedPreferences;
+ (id)sharedPreferencesWithInstanceContext:(id)a0;

- (void)setAnnounceNotificationsOnHearingAidsSupported:(BOOL)a0;
- (void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(BOOL)a0;
- (void)setSpokenNotificationShouldAnnounceAllNotifications:(BOOL)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (void)setSiriDebugUIEnabled:(BOOL)a0;
- (BOOL)designModeIsEnabled;
- (id)languageCode;
- (BOOL)siriResponseShouldAlwaysPrintWithoutOverride;
- (BOOL)debugButtonIsEnabled;
- (void)setOfflineDictationOverride:(BOOL)a0;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (void)setOpportuneSpeakingFileLoggingIsEnabled:(BOOL)a0;
- (void)_internalPreferencesDidChangeExternally;
- (unsigned char)myriadDeviceClass;
- (BOOL)infersQoSFromInstanceUUIDForEAR;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (id)init;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (void)_registerForNavStatusIfNeeded;
- (id)configOverrides;
- (void)setLanguageCode:(id)a0 outputVoice:(id)a1;
- (id)speechProfileExternalOfflineModelRootPath;
- (BOOL)siriVocabularyEnabled;
- (BOOL)isLanguageDetectorEnabledByServer;
- (BOOL)commandLoggingEnabled;
- (void)_setNanoPreferencesValue:(id)a0 forKey:(id)a1;
- (id)nanoOfflineDictationStatus;
- (void)setLanguageCode:(id)a0;
- (BOOL)myriadServerHasProvisioned;
- (BOOL)isInRestrictedSharingMode;
- (void)setSiriResponseShouldAlwaysPrint:(BOOL)a0;
- (void)setNanoOutputVoice:(id)a0;
- (void)synchronizeAVVCPreferencesDomain;
- (void)_registerForOutputVoice;
- (BOOL)nanoDictationEnabled;
- (void)setAlwaysAllowVoiceActivation:(BOOL)a0;
- (void)setMyriadDeviceDelay:(double)a0;
- (BOOL)alwaysObscureBackgroundContentWhenActive;
- (BOOL)alwaysAllowVoiceActivation;
- (BOOL)myriadServerProvisioning;
- (double)opportuneSpeakingTimeoutInterval;
- (void)setNanoAssistantEnabled:(BOOL)a0;
- (void)setNanoPhraseSpotterEnabled:(BOOL)a0;
- (void)setSpokenNotificationsProxCardSeen;
- (id)supplementalLanguages;
- (BOOL)alwaysShowRecognizedSpeech;
- (BOOL)_dictationIsAllowed;
- (void)clearAnnounceNotificationsInCarPlayType;
- (BOOL)autoDismissal2018Enabled;
- (double)autoDismissalIdleTimeout;
- (void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(id /* block */)a0;
- (id)activeDictationLanguages;
- (void)setStartAlertEnabled:(BOOL)a0;
- (long long)nanoUseDeviceSpeakerForTTS;
- (void)_setOnDeviceDictationAvailableAlertPresentedLocal:(BOOL)a0;
- (BOOL)showServerOnUI;
- (void)setOnDeviceDictationAvailableAlertPresented:(BOOL)a0;
- (BOOL)nanoAlwaysShowRecognizedSpeech;
- (id)horsemanSupplementalLanguageDictionary;
- (void)setOpportuneSpeakingTimeoutInterval:(double)a0;
- (BOOL)spokenNotificationSkipTriggerlessReplyConfirmation;
- (BOOL)siriXDebugStatusEnabled;
- (int)myriadConstantGoodness;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (id)myriadLastWin;
- (unsigned long long)internalUserClassification;
- (void)setCardLoggingEnabled:(BOOL)a0;
- (void)setShowServerOnUI:(BOOL)a0;
- (void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(id /* block */)a0;
- (id)_AFSupportPreferencesValueForKey:(id)a0;
- (void)setAutoDismissalMaxAttentionSamplingTime:(double)a0;
- (void)setMyriadConstantGoodness:(int)a0;
- (BOOL)allowExplicitContent;
- (BOOL)utteranceDetectionEnabled;
- (long long)siriDataSharingOptInStatus;
- (void)setNetworkLoggingEnabled:(BOOL)a0;
- (BOOL)announceNotificationsOnHearingAidsEnabled;
- (void)setValue:(id)a0 forSessionContextKey:(id)a1;
- (BOOL)myriadDuckingEnabled;
- (void)setSmartLanguageSelection:(BOOL)a0;
- (BOOL)shouldLogForQA;
- (long long)accessibleEndpointerThreshold;
- (void)_suppressLowStorageNotificationForLanguage:(id)a0 suppress:(BOOL)a1;
- (void)setDismissWhenFaceAttentionIsLostEnabled:(BOOL)a0;
- (void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)a0 platform:(long long)a1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)a0;
- (void)setHomeAccessoriesRepromptStatus:(id)a0;
- (void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(id /* block */)a0;
- (id)nanoDictationAutoPunctuationSupportedLanguages;
- (void)clearMessageWithoutConfirmationHeadphonesEnabled;
- (BOOL)announceNotificationsOnHearingAidsSupported;
- (void)setManualEndpointingThreshold:(id)a0;
- (double)myriadDeviceSlowdown;
- (id)offlineDictationStatus;
- (BOOL)nanoAssistantEnabled;
- (long long)nanoSiriDataSharingOptInStatus;
- (void)synchronize;
- (void)suppressLowStorageNotificationForLanguage:(id)a0 suppress:(BOOL)a1;
- (BOOL)limitedAudioLoggingEnabled;
- (void)_registerForDarwinNotification:(struct __CFString { } *)a0 block:(id /* block */)a1;
- (void)_registerForInternalPrefs;
- (id)nanoLanguageCode;
- (void)getSpokenNotificationTemporarilyDisabledForApp:(id)a0 completion:(id /* block */)a1;
- (void)_languageCodeDidChangeExternally;
- (BOOL)isSmartLanguageSelectionEnabled;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (void)_assistantEnablementDidChangeExternally;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (double)myriadTestDeviceDelay;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (BOOL)nanoCrownActivationEnabled;
- (void)setSpeechProfileExternalOfflineModelRootPath:(id)a0;
- (BOOL)enableDragAndDrop;
- (void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)a0 completion:(id /* block */)a1;
- (void)setMediaPlaybackEnabled:(BOOL)a0;
- (void)setCurrentNavigationState:(unsigned long long)a0;
- (void)setListenAfterSpeakingDisabled:(BOOL)a0;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)a0 isGoodFit:(BOOL *)a1;
- (BOOL)isOnDeviceDictationForced;
- (BOOL)siriSpeakerGradingDebugUIEnabled;
- (void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(id /* block */)a0;
- (BOOL)databaseSyncEnabled;
- (void)setKeepRecordedAudioFiles:(BOOL)a0;
- (void)setHandsOnIdleTimeInterval:(double)a0;
- (void)setOfflineDictationStatus:(id)a0;
- (void)setSiriSpeakerGradingDebugUIEnabled:(BOOL)a0;
- (void)setMessageWithoutConfirmationHeadphonesEnabled:(BOOL)a0;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (BOOL)offlineDictationOverride;
- (id)outputVoice;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (id)cloudSyncEnabledModificationDate;
- (id)instanceContext;
- (void)setDictationAutoPunctuationEnabled:(BOOL)a0;
- (void)_setLoggingDefaultValue:(id)a0 forKey:(id)a1;
- (double)opportuneSpeakingPauseInterval;
- (void)setPreferOnlineRecognitionEnabled:(BOOL)a0;
- (BOOL)disableMyriadBLEActivity;
- (void)setSiriDataSharingOptInAlertPresented:(BOOL)a0 completion:(id /* block */)a1;
- (void)setConfigOverrides:(id)a0;
- (void)setOpportuneSpeakingPauseInterval:(double)a0;
- (BOOL)showsHoldToTalkIndicator;
- (BOOL)forceOfflineRecognitionEnabled;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (BOOL)dismissWhenFaceAttentionIsLostEnabled;
- (void)resetSessionLanguage;
- (double)myriadMaxNoOperationDelay;
- (id)inProgressOutputVoice;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (void)_setDictationIsAllowed:(BOOL)a0;
- (BOOL)nanoSiriResponseShouldAlwaysPrint;
- (long long)useDeviceSpeakerForTTS;
- (void)appendHomeAccessorySiriDataSharingChangeLogEvent:(id)a0;
- (BOOL)displayedLowStorageNotificationForLanguage:(id)a0;
- (void)_setSuppressDictationOptInLocal:(BOOL)a0;
- (void)setOfflineDictationProfileOverridePath:(id)a0;
- (double)handsOnIdleTimeInterval;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)a0 isGoodFit:(BOOL *)a1;
- (double)autoDismissalMaxAttentionSamplingTime;
- (void)setSpokenNotificationIsAlwaysOpportune:(BOOL)a0;
- (BOOL)isDictationOnDeviceSamplingDisabled;
- (BOOL)dismissWhenDeviceIsLoweredEnabled;
- (void)setEnableNonFullScreenAppearance:(BOOL)a0;
- (void)_setAssistantIsEnabledLocal:(BOOL)a0;
- (id)getHomeAccessorySiriDataSharingPropagationLog;
- (id)siriDataSharingOptInStatusHistory;
- (BOOL)enableNonFullScreenAppearance;
- (void)setUseDeviceSpeakerForTTS:(long long)a0;
- (BOOL)getMessageWithoutConfirmationHeadphonesEnabled;
- (BOOL)getMessageWithoutConfirmationEnabled;
- (double)handsOffIdleTimeInterval;
- (id)supplementalLanguageDictionaryForProduct:(id)a0;
- (BOOL)tlsSessionTicketsFlushPending;
- (id)supplementalLanguagesModificationDate;
- (void)_setDictationAutoPunctuationEnabledLocal:(BOOL)a0;
- (void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)a0 completion:(id /* block */)a1;
- (void)setAssistantLanguageForceRTL:(BOOL)a0;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setNanoLanguageCode:(id)a0 outputVoice:(id)a1 forTinkerDevice:(id)a2;
- (void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(id /* block */)a0;
- (void)getSpokenNotificationTemporarilyDisabledStatusWithCompletion:(id /* block */)a0;
- (void)setDictationIsEnabled:(BOOL)a0;
- (id)_languageCodeWithFallback:(BOOL)a0;
- (void)_nanoPrefsDidChangeExternally;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (BOOL)dictationIsEnabled;
- (void)getAnnounceNotificationsTemporarilyDisabledStatusForPlatform:(long long)a0 completion:(id /* block */)a1;
- (id)description;
- (id)myriadMonitorTimeOutInterval;
- (void)setNanoDictationAutoPunctuationEnabled:(BOOL)a0;
- (void)synchronizeLogPreferencesDomain;
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)myriadCoordinationEnabled;
- (BOOL)deviceHasAtvOrHomepodInHome;
- (BOOL)nanoRaiseToSpeakEnabled;
- (id)manualEndpointingThreshold;
- (void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(id /* block */)a0;
- (BOOL)announceNotificationsOnBuiltInSpeakerEnabled;
- (unsigned long long)currentNavigationState;
- (void)_preferencesDidChangeExternally;
- (BOOL)dictationAutoPunctuationEnabled;
- (void)setNanoSiriDataSharingOptInStatus:(long long)a0;
- (BOOL)_languageCode:(id)a0 isGoodFitForPreferredLanguages:(id)a1;
- (void)setOutputVoice:(id)a0;
- (void)setAccessibleEndpointerThreshold:(long long)a0;
- (void)_registerForAssistantEnablementChangeNotifications;
- (BOOL)getMessageWithoutConfirmationInCarPlayEnabled;
- (void)_dictationEnablementDidChangeExternally;
- (id)dictationAutoPunctuationSupportedLocales;
- (void)_registerForLanguageCodeChangeNotifications;
- (BOOL)suppressAssistantOptIn;
- (void)setDesignModeEnabled:(BOOL)a0;
- (void)erasePreferences;
- (void)getAnnounceNotificationsTemporarilyDisabledForApp:(id)a0 platform:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isDictationHIPAACompliant;
- (void)setNanoLanguageCode:(id)a0;
- (BOOL)cardLoggingEnabled;
- (id)_nanoPreferencesValueForKey:(id)a0;
- (void)setDebugButtonIsEnabled:(BOOL)a0;
- (void)setStreamingDictationEnabled:(BOOL)a0;
- (void)setUtteranceDetectionEnabled:(BOOL)a0;
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(BOOL)a0;
- (void)setAutoDismissalIdleTimeout:(double)a0;
- (void)_setDictationIsEnabledLocal:(BOOL)a0;
- (double)myriadDeviceTrumpDelay;
- (void)setInProgressOutputVoice:(id)a0;
- (void)setCrownActivationEnabled:(BOOL)a0;
- (id)offlineDictationProfileOverridePath;
- (void)getMessageWithoutConfirmationEnabledWithCompletion:(id /* block */)a0;
- (double)myriadDeviceDelay;
- (void)setAlwaysShowRecognizedSpeech:(BOOL)a0;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)a0;
- (void)setDictationSLSLanguagesEnabled:(id)a0;
- (BOOL)mediaPlaybackEnabled;
- (void)_registerForNanoPrefsChangeNotifications;
- (id)_outputVoiceWithFallback:(BOOL)a0;
- (void)setAlwaysObscureBackgroundContentWhenActive:(BOOL)a0;
- (void)setEnableDragAndDrop:(BOOL)a0;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setNanoTTSSpeakerVolume:(float)a0;
- (BOOL)ignoreMyriadPlatformBias;
- (void)setSpokenNotificationTemporarilyDisabledUntil:(id)a0;
- (void)setNanoRaiseToSpeakEnabled:(BOOL)a0;
- (void)setForceOfflineRecognitionEnabled:(BOOL)a0;
- (BOOL)shouldDisableMediaEntitySync;
- (void)removeConfigOverrideForKey:(id)a0;
- (BOOL)nanoPhraseSpotterEnabled;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)a0 isGoodFit:(BOOL *)a1;
- (BOOL)streamingDictationEnabled;
- (id)myriadDeviceGroup;
- (void)setAutoDismissal2018Enabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)avvcLoggingEnabled;
- (void)setSiriDataSharingOptInStatus:(long long)a0 propagateToHomeAccessories:(BOOL)a1 source:(long long)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (void)setCompanionConnectionsOverBLEEnabled:(BOOL)a0;
- (void)setNanoAlwaysShowRecognizedSpeech:(BOOL)a0;
- (void)setNanoSiriResponseShouldAlwaysPrint:(BOOL)a0;
- (void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(id /* block */)a0;
- (BOOL)isAccessibleEndpointerEnabled;
- (void)setMessageWithoutConfirmationEnabled:(BOOL)a0;
- (void)getExperimentForConfigurationIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)onDeviceDictationAvailableAlertPresented;
- (void)_registerForDictationEnablementChangeNotifications;
- (float)myriadDeviceAdjust;
- (void)insertHomeAccessorySiriDataSharingPropagationLogEvent:(id)a0;
- (BOOL)cloudSyncEnabled;
- (BOOL)opportuneSpeakingFileLoggingIsEnabled;
- (BOOL)assistantLanguageForceRTL;
- (void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)a0 forApp:(id)a1 platform:(long long)a2;
- (void)setTLSSessionTicketsFlushPending:(BOOL)a0;
- (void)setSpokenNotificationSkipTriggerlessReplyConfirmation:(BOOL)a0;
- (BOOL)siriResponseShouldAlwaysPrint;
- (void)setLanguageDetectorEnabled:(BOOL)a0;
- (void)setAnnounceNotificationsOnHearingAidsEnabled:(BOOL)a0;
- (void)setSuppressDictationOptIn:(BOOL)a0;
- (void)setAssistantIsEnabled:(BOOL)a0;
- (id)dictationSLSLanguagesEnabled;
- (void)setNanoCrownActivationEnabled:(BOOL)a0;
- (void)_outputVoiceDidChangeExternally;
- (float)nanoTTSSpeakerVolume;
- (void)clearMessageWithoutConfirmationInCarPlayEnabled;
- (void)setMyriadLastWin;
- (BOOL)deviceHasPairedWatches;
- (void)setCommandLoggingEnabled:(BOOL)a0;
- (BOOL)companionConnectionsOverBLEEnabled;
- (void)setSuppressAssistantOptIn:(BOOL)a0;
- (BOOL)listenAfterSpeakingDisabled;
- (BOOL)suppressDictationOptIn;
- (void)setConfigOverrideWithValue:(id)a0 forKey:(id)a1;
- (void)setIgnoreServerManualEndpointingThreshold:(BOOL)a0;
- (id)nanoOutputVoice;
- (BOOL)shouldSuppressSiriDataSharingOptInAlert;
- (BOOL)crownActivationEnabled;
- (BOOL)assistantIsEnabled;
- (void)setInternalUserClassification:(unsigned long long)a0;
- (void)setDismissWhenDeviceIsLoweredEnabled:(BOOL)a0;
- (BOOL)isLocaleIdentifierNativelySupported:(id)a0;
- (void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(id /* block */)a0;
- (BOOL)isMediaEntitySyncDisabled;
- (void)setCurareOrchestrationEnabled:(BOOL)a0;
- (void)setSiriXDebugStatusEnabled:(BOOL)a0;
- (void)appendToSiriDataSharingOptInStatusHistory:(long long)a0 previousOptInStatus:(long long)a1 statusChangeSource:(long long)a2 reason:(id)a3;
- (id)initWithInstanceContext:(id)a0;
- (BOOL)nanoDictationAutoPunctuationEnabled;
- (void)_AFSupportPreferencesSetValue:(id)a0 forKey:(id)a1;
- (BOOL)isLanguageDetectorEnabled;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)clearSpokenNotificationTemporarilyDisabledStatus;
- (BOOL)siriDebugUIEnabled;
- (id)supplementalLanguagesForProduct:(id)a0 forBuildVersion:(id)a1;
- (void)setShowsHoldToTalkIndicator:(BOOL)a0;
- (id)getHomeAccessoriesRepromptStatus;
- (void)setSpokenNotificationTemporarilyDisabledForApp:(id)a0 until:(id)a1;
- (BOOL)isCurrentLocaleNativelySupported;
- (id)valueForSessionContextPreferenceKey:(id)a0;
- (void)setDatabaseSyncEnabled:(BOOL)a0;
- (id)getHomeAccessorySiriDataSharingChangeLog;
- (void)setNanoDictationEnabled:(BOOL)a0;
- (void)setSiriVocabularyEnabled:(BOOL)a0;
- (void)setNanoUseDeviceSpeakerForTTS:(long long)a0;
- (void)setMessageWithoutConfirmationInCarPlayEnabled:(BOOL)a0;
- (id)enabledDictationLocales;
- (BOOL)includeProbePacketCaptureForABC;
- (void)synchronizeVoiceServicesLanguageCode;
- (void)clearMessageWithoutConfirmationEnabled;
- (void)setHandsOffIdleTimeInterval:(double)a0;
- (BOOL)startAlertEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (void)setMyriadTestDeviceDelay:(double)a0;
- (BOOL)preferOnlineRecognitionEnabled;
- (void)setMyriadDeviceGroup:(id)a0;
- (void)setLimitedAudioLoggingEnabled:(BOOL)a0;
- (void)setAVVCLoggingEnabled:(BOOL)a0;
- (BOOL)networkLoggingEnabled;
- (void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)a0 platform:(long long)a1 completion:(id /* block */)a2;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)curareOrchestrationEnabled;
- (void)setAnnounceNotificationsInCarPlayType:(long long)a0;
- (void)setSiriDataSharingOptInStatus:(long long)a0 completion:(id /* block */)a1;
- (double)autoDismissalExtendedIdleTimeout;
- (BOOL)keepRecordedAudioFiles;
- (void)setAutoDismissalExtendedIdleTimeout:(double)a0;

@end
