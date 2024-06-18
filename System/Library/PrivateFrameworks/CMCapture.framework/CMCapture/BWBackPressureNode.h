@class BWLimitedGMErrorLogger, NSMutableArray, NSObject;
@protocol BWNodeBackPressureSource, OS_dispatch_semaphore;

@interface BWBackPressureNode : BWNode {
    unsigned int _numberOfInputs;
    NSMutableArray *_receivedPresentationTimestampByInput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _presentationTimestampLock;
    long long _initialSemaphoreValue;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    int _numEODMessagesReceived;
    BOOL _receivedFirstFrame;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) id<BWNodeBackPressureSource> backPressureSourceNode;

+ (void)initialize;

- (id)init;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)_handleUpdatedPresentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forIndex:(unsigned long long)a1;
- (id)nodeSubType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)setInitialSemaphoreValue:(int)a0;
- (void)_setSemaphore:(id)a0;
- (id)initWithNumberOfInputsAndOutputs:(unsigned int)a0 initialSemaphoreValue:(long long)a1;

@end
