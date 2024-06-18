@class UIWindow, NSString, AXUIClient, AXDispatchTimer, AXAccessQueueTimer, AXAssetsService;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate> {
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
    AXUIClient *_soundDetectionClient;
    AXAssetsService *_assetsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_registerForHomeButtonBreakage;
+ (void)_registerForNotifications;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_processStartupSoundEnabled;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)_performValidations;
+ (void)_setRebootedGracefullyOnce;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)initialize;
+ (void)_setVoiceOverTouchSettings:(unsigned char)a0;
+ (void)_updateAXSettings;
+ (BOOL)_alreadyRebootedGracefullyOnce;
+ (void)checkScreenContrast;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkForDataResetFile;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)a0;
+ (void)checkAccessibilityOptions;
+ (void)_checkForHomeButtonBreakage:(BOOL)a0;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_checkContrastSetting;
+ (void)_updateSpringBoardHelper;
+ (void)_handleLiveListenEventIsListening:(BOOL)a0 audioLevel:(double)a1;

- (void)_reachabilityChanged:(id)a0;
- (id)init;
- (void)swipeDetectorDetectedSwipe;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)a0;
- (void)swipeDetectorCanceled;
- (void)_remoteAccessibilitySettingsChanged:(id)a0;
- (void)_updateRemoteAccessibilitySettings;
- (void)_ensureUltronAppVisibility:(BOOL)a0;
- (void)_updateAXSettings;
- (void)_hideVoiceOverEnabler;
- (void)_playVOActivationSoundEnded;
- (void)_playVOActivationSoundStarted;
- (void).cxx_destruct;
- (void)_makeVoiceOverVibrateWindow;
- (BOOL)_shouldArmSoundRecognition;
- (void)_voiceOverEnabled:(id)a0;
- (void)_turnOnHearingControlCenterModule;
- (void)_showSwipeDetectionEnablerView;
- (void)dealloc;
- (void)_bootstrapSoundDetection;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)_initializeRemoteSettingsListener;
- (BOOL)_shouldArmVoiceTriggers;
- (void)_startupSoundDetectionUIServer;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)_registerReachability;

@end
