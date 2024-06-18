@class SiriLongPressButtonSource, NSString, NSArray, SBVoiceControlTransientOverlayViewController;
@protocol SiriAssertion;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id<SiriAssertion> _siriPreheatAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)handleHeadsetButtonUp;
- (id)siriBluetoothDeviceSource:(id)a0;
- (void)headsetAvailabilityChanged;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)a0;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)a0;
- (void)_prepareDelayedHeadsetAction;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)a0;
- (void)dismissTransientOverlay;
- (void)_spokenLanguageDidChange:(id)a0;
- (void)_updateNextRecognitionAudioInputPaths:(id)a0;
- (void).cxx_destruct;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (BOOL)_shouldEnterVoiceControl;
- (void)configureVoiceControl;
- (void)_cancelDelayedHeadsetAction;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_assistantActivationSettingsDidChange:(id)a0;
- (BOOL)handleHomeButtonHeld;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (BOOL)isVisible;

@end
