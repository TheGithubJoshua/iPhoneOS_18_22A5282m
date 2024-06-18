@class NSObject, AWSampleLogger;
@protocol OS_dispatch_queue;

@interface AWAttentionSampler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) BOOL lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) double lastFrameNumber;
@property (readonly, nonatomic) BOOL unitTestSampling;

- (id)initWithMask:(unsigned long long)a0;
- (id)init;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)startDeadlineComputation;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)finishDeadlineComputationWithOptions:(union { })a0;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(union { })a2;
- (void).cxx_destruct;
- (id)description;
- (void)setUnitTestMode;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;

@end
