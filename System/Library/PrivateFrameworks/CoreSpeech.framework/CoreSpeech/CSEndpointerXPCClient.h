@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate> {
    id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
}

@property (retain, nonatomic) NSXPCConnection *endpointerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (double)elapsedTimeWithNoSpeech;
- (void)setEndpointerDelegate:(id)a0;
- (id)endpointerDelegate;
- (void)setEndWaitTime:(double)a0;
- (id)endpointerModelVersion;
- (unsigned long long)endPointAnalyzerType;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)setStartWaitTime:(double)a0;
- (void)setActiveChannel:(unsigned long long)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)updateEndpointerThreshold:(float)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)processServerEndpointFeatures:(id)a0;
- (id)_getRemoteServiceProxyObject;
- (void)_createClientConnection;
- (void).cxx_destruct;
- (void)didDetectStartpointAtTime:(double)a0;
- (void)dealloc;
- (void)didDetectHardEndpointAtTime:(double)a0 withMetrics:(id)a1;

@end
