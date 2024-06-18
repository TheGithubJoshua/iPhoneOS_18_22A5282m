@class CSAudioRecordContext, NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzerImpl;

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer>

@property (retain, nonatomic) id<CSEndpointAnalyzerImpl> hybridEndpointer;
@property (retain, nonatomic) id<CSEndpointAnalyzerImpl> nnvadEndpointer;
@property (weak, nonatomic) id<CSEndpointAnalyzerImpl> activeEndpointer;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) BOOL accessibleEndpointerEnabled;
@property (nonatomic) BOOL recordingDidStop;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> endpointerDelegate;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> endpointerImplDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) long long endpointMode;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) BOOL saveSamplesSeenInReset;
@property (retain, nonatomic) NSString *mhId;

- (void)endpointer:(id)a0 detectedTwoShotAtTime:(double)a1;
- (void)processTaskString:(id)a0;
- (BOOL)isWatchRTSTriggered;
- (double)elapsedTimeWithNoSpeech;
- (void)_setupNNVADEndpointer;
- (long long)fetchCurrentEndpointerOperationMode;
- (id)initForSidekick;
- (void)processASRFeatures:(id)a0 fromServer:(BOOL)a1;
- (void)logAnchorMachAbsTime:(unsigned long long)a0 numSamplesProcessedBeforeAnchorTime:(unsigned long long)a1 isAnchorTimeBuffered:(BOOL)a2;
- (void)preheat;
- (void)stopEndpointer;
- (id)endpointerModelVersion;
- (unsigned long long)endPointAnalyzerType;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (void)setRequestMHUUID:(id)a0;
- (id)init;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)logHybridEndpointFeaturesWithEvent:(id)a0 locale:(id)a1;
- (void)setActiveChannel:(unsigned long long)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)endpointer:(id)a0 didDetectHardEndpointAtTime:(double)a1 withMetrics:(id)a2;
- (void)endpointer:(id)a0 reportEndpointBufferHostTime:(unsigned long long)a1 firstBufferHostTime:(unsigned long long)a2;
- (void)updateEndpointerThreshold:(float)a0;
- (void)endpointer:(id)a0 didDetectStartpointAtTime:(double)a1;
- (void)recordingStoppedForReason:(long long)a0;
- (void)processServerEndpointFeatures:(id)a0;
- (void)processFirstAudioPacketTimestamp:(id)a0 firstAudioSampleSensorTimestamp:(unsigned long long)a1;
- (BOOL)_updateAccessibleEndpointerThresholdIfNeed;
- (void)processOSDFeatures:(id)a0 withFrameDurationMs:(double)a1;
- (void).cxx_destruct;
- (void)reset;

@end
