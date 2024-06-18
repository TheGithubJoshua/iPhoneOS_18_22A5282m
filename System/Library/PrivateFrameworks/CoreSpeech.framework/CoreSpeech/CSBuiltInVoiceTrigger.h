@class NSDictionary, CSOSTransaction, NSObject, CSSpeechManager, CSVoiceTriggerAlwaysOnProcessor, NSMutableArray, CSAudioStream, CSVoiceTriggerSecondPass, CSAudioProvider, CSKeywordAnalyzerNDAPIResult, CSVoiceTriggerFirstPassConfig, CSStateMachine, NSString, CSPolicy, CSAsset, NSNumber, CSVoiceTriggerSecondChanceContext, CSAudioRouteChangeMonitor;
@protocol OS_dispatch_group, CSVoiceTriggerDelegate, OS_dispatch_source, OS_dispatch_queue, CSSecondPassProgressDelegate;

@interface CSBuiltInVoiceTrigger : NSObject <CSActivationEventNotificationHandlerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSVoiceTriggerXPCServiceProxyDelegate, CSStateMachineDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSAudioRouteChangeMonitorDelegate, CSPhoneCallStateMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSAttSiriStateMonitorDelegate, CSSelfTriggerDetectorDelegate, CSSecondPassProgressProviding>

@property (retain, nonatomic) CSPolicy *voiceTriggerStartPolicy;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) BOOL voiceTriggerEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI;
@property (retain, nonatomic) CSVoiceTriggerFirstPassConfig *firstPassConfig;
@property (nonatomic) BOOL hasTriggerPending;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long bestChannel;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *onsetResult;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *lastTriggeredOnsetResult;
@property (nonatomic) unsigned long long lastTriggeredBestChannel;
@property (nonatomic) unsigned long long onsetChannel;
@property (nonatomic) unsigned long long channelSelectionDelay;
@property (nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection;
@property (retain, nonatomic) NSDictionary *channelSelectionScores;
@property (nonatomic) unsigned long long processingChunkSamples;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) BOOL isSecondPassCancelled;
@property (nonatomic) BOOL isSiriClientListening;
@property (nonatomic) BOOL isListenPollingStarting;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings;
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isHearstRouted;
@property (retain, nonatomic) CSPolicy *voiceTriggerAOPModeStartPolicy;
@property (retain, nonatomic) CSStateMachine *stateMachine;
@property (retain, nonatomic) CSVoiceTriggerAlwaysOnProcessor *alwaysOnProcessorController;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) unsigned long long currentSplitterState;
@property (nonatomic) BOOL shouldDisableOnSpeakerVerificationInSplitterMode;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL firstTimeAssetConfigured;
@property (retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *validationTimer;
@property (retain, nonatomic) NSNumber *firstPassMyriadGoodness;
@property (nonatomic) unsigned long long phoneCallState;
@property (nonatomic) unsigned long long attSiriState;
@property (nonatomic) BOOL isJarvisConnected;
@property (nonatomic) BOOL isHearstConnected;
@property (nonatomic) BOOL isSiriInputSourceOutOfBand;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (retain, nonatomic) CSAudioRouteChangeMonitor *audioRouteChangeMonitor;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (nonatomic) unsigned long long lastSelfTriggerDetectedStartMachTime;
@property (nonatomic) struct OpaqueFigEndpoint { } *carPlayEndpoint;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (weak, nonatomic) id<CSSecondPassProgressDelegate> secondPassProgressDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CSAudioRouteChangeMonitor:(id)a0 didReceiveAudioRouteChangeEvent:(long long)a1;
- (void)_teardownSecondPassIfNeeded;
- (void)_reset;
- (void)_forceUpdateCarPlayEndpointWithJarvisConnected:(BOOL)a0;
- (void)_cancelLastAudioStreamHold;
- (void)CSVoiceTriggerXPCServiceProxy:(id)a0 bypassRaiseToSpeak:(BOOL)a1;
- (void)_stopAPVoiceTrigger;
- (unsigned long long)_currentState;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_transitAOPModeSync:(BOOL)a0;
- (BOOL)_hasPhoneCallOnNonBargeInDevice;
- (id)initWithTargetQueue:(id)a0 withSpeechManager:(id)a1;
- (void)_startAOPVoiceTrigger;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)_transitAOPModeAsync:(BOOL)a0;
- (void)_stopAOPVoiceTrigger;
- (void)_receivedSiriInputSourceOutOfBandEvent:(BOOL)a0;
- (BOOL)_hasHearstRoutableDuringPhoneCall;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)setAsset:(id)a0;
- (BOOL)_shouldHandleAOPVoiceTrigger;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)_receivedHearstConnectedEvent:(BOOL)a0;
- (void)_stopListening;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)_updateCurrentSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;
- (void)_receivedJarvisConnectionEvent:(BOOL)a0;
- (void)pendingSecondPassTriggerWasClearedForClient:(unsigned long long)a0 deviceId:(id)a1;
- (void)_startListenWithCompletion:(id /* block */)a0;
- (void)CSVoiceTriggerXPCServiceProxy:(id)a0 bypassPhraseSpotter:(BOOL)a1;
- (BOOL)_hasSiriInputOutOfBandAndNotInSplitter;
- (BOOL)_isBuiltInAOPVoiceTriggerEvent:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)start;
- (void)_transitVoiceTriggerStatus:(BOOL)a0 force:(BOOL)a1;
- (void)_setupStateMachine;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_createSecondPassIfNeededWithFirstPassSource:(unsigned long long)a0;
- (void)cancelSecondPassRunning;
- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (void)_cancelAllAudioStreamHold;
- (BOOL)_isVoiceTriggerStateTransitionEvent:(id)a0;
- (void)attSiriStateMonitor:(id)a0 didRecieveAttSiriStateChange:(unsigned long long)a1;
- (void).cxx_destruct;
- (long long)_currentJarvisTriggerMode;
- (void)_setAsset:(id)a0;
- (BOOL)_shouldReuseBuiltInAudioProvider;
- (void)_addAudioStreamHold:(id)a0;
- (BOOL)_shouldSecondPassKeepAlive;
- (void)_APModeValidationTimerFired;
- (void)didIgnoreEvent:(long long)a0 from:(long long)a1;
- (void)_startAPVoiceTriggerWithCompletion:(id /* block */)a0;
- (void)_transitAOPMode:(BOOL)a0;
- (void)_startListenPollingWithInterval:(double)a0 completion:(id /* block */)a1;
- (BOOL)_shouldCancelSecondPassResultWithVoiceTriggerInfo:(id)a0;
- (void)_startVoiceTriggerWithCompletion:(id /* block */)a0;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)_setIsSecondPassRunning:(BOOL)a0;
- (id)initWithTargetQueue:(id)a0 withSpeechManager:(id)a1 withAudioRouteChangeMonitor:(id)a2;
- (void)_handleVoiceTriggerSecondPassWithSource:(unsigned long long)a0 deviceId:(id)a1 event:(id)a2 audioProviderUUID:(id)a3 firstPassInfo:(id)a4;
- (void)_notifyEvent:(unsigned long long)a0;
- (id)_firstPassVoiceTriggerSignalEstimate;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)CSBluetoothWirelessSplitterMonitor:(id)a0 didReceiveSplitterStateChange:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;
- (BOOL)_shouldEnableAOPVoiceTrigger;
- (id)_eventName:(unsigned long long)a0;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)reset;
- (void)_handleSecondPassResult:(id)a0 deviceId:(id)a1 error:(id)a2;
- (void)_handleAudioChunk:(id)a0;
- (void)_receivedHearstRoutedEvent:(BOOL)a0;
- (void)didTransitFrom:(long long)a0 to:(long long)a1 by:(long long)a2;
- (void)_reportVoiceTriggerFirstPassFireFromAP;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (id)_stateName:(unsigned long long)a0;
- (BOOL)_shouldEnableAPVoiceTrigger;

@end