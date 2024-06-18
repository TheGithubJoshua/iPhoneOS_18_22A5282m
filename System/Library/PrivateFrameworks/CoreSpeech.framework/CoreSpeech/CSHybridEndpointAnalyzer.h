@class NSDate, OSDFeatures, NSString, CSAudioRecordContext, _EAREndpointer, NSObject, CSAsset, NSMutableArray, CSServerEndpointFeatures, OSDAnalyzer;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;

@interface CSHybridEndpointAnalyzer : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, OSDAnalyzerDelegate, CSEndpointAnalyzerImpl>

@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime;
@property (nonatomic) unsigned long long anchorMachAbsTime;
@property (nonatomic) BOOL isAnchorTimeBuffered;
@property (nonatomic) BOOL isRequestTimeout;
@property (nonatomic) BOOL didAddAudio;
@property (retain, nonatomic) OSDAnalyzer *osdAnalyzer;
@property (retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint;
@property (nonatomic) BOOL canProcessCurrentRequest;
@property (retain, nonatomic) _EAREndpointer *hybridClassifier;
@property (retain, nonatomic) NSString *endpointerModelVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue;
@property (retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures;
@property (retain, nonatomic) OSDFeatures *lastKnownOSDFeatures;
@property (retain, nonatomic) NSMutableArray *serverFeatureLatencies;
@property (nonatomic) double lastKnowServerFeaturesLatency;
@property (nonatomic) BOOL epResult;
@property (nonatomic) double serverFeaturesWarmupLatency;
@property (retain, nonatomic) NSDate *lastServerFeatureTimestamp;
@property (nonatomic) BOOL didReceiveServerFeatures;
@property (nonatomic) double clientLagThresholdMs;
@property (nonatomic) double clampedSFLatencyMsForClientLag;
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue;
@property (nonatomic) double lastReportedEndpointTimeMs;
@property (nonatomic) double processedAudioInSeconds;
@property (nonatomic) float lastEndpointPosterior;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (nonatomic) BOOL didCommunicateEndpoint;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double hepAudioOriginInMs;
@property (retain, nonatomic) CSAudioRecordContext *recordContext;
@property (nonatomic) BOOL speechEndpointDetected;
@property (retain, nonatomic) NSDate *firstAudioPacketTimestamp;
@property (nonatomic) double firstAudioSampleSensorTimestamp;
@property (nonatomic) BOOL didTimestampFirstAudioPacket;
@property (nonatomic) BOOL recordingDidStop;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue;
@property (nonatomic) BOOL didDetectSpeech;
@property (nonatomic) double elapsedTimeWithNoSpeech;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> implDelegate;
@property (nonatomic) unsigned long long activeChannel;
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

- (long long)fetchCurrentEndpointerOperationMode;
- (void)preheat;
- (void)stopEndpointer;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)updateEndpointerThreshold:(float)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)processServerEndpointFeatures:(id)a0;
- (BOOL)_shouldUsePhaticWithRecordContext;
- (BOOL)_multimodalEndpointerEnabled;
- (void).cxx_destruct;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)_emitEndpointDetectedEventWithEndpointTimeMs:(double)a0 endpointBufferHostTime:(unsigned long long)a1 endpointerFeatures:(id)a2 endpointerDecisionLagInNs:(double)a3 extraDelayMs:(unsigned long long)a4 endpointScore:(double)a5 asrFeatureLatencies:(id)a6;
- (id)_getCSHybridEndpointerConfigForAsset:(id)a0;
- (void)handleVoiceTriggerWithActivationInfo:(id)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1;
- (void)_readParametersFromHEPAsset:(id)a0;
- (void)terminateProcessing;
- (void)logFeaturesWithEvent:(id)a0 locale:(id)a1;
- (void)reset;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_updateAssetWithCurrentLanguage;
- (void)_loadAndSetupEndpointerAssetIfNecessary;
- (void)_updateAssetWithLanguage:(id)a0;
- (void)osdAnalyzer:(id)a0 didUpdateOSDFeatures:(id)a1;

@end