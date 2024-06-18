@class VSSpeechRequest, VSDeviceTTSCore, VSInstrumentMetrics, NSError, NSString;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol>

@property (retain, nonatomic) VSDeviceTTSCore *deviceCore;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) double estimatedDuration;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortTermCachedEngineForVoice:(id)a0 voiceResource:(id)a1;
+ (id)shortTermCachedEngines;

- (id)initWithRequest:(id)a0;
- (void)main;
- (id)init;
- (void)suspend;
- (void)cancel;
- (void).cxx_destruct;
- (id)delegate;
- (void)resume;
- (id)taskHash;

@end
