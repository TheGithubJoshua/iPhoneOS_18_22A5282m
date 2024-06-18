@class NSMutableArray;

@interface BWFunnelNode : BWNode {
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _running;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (id)initWithNumberOfInputs:(int)a0 mediaType:(unsigned int)a1 holdMessages:(BOOL)a2;
- (void)dealloc;
- (id)initWithNumberOfInputs:(int)a0 mediaType:(unsigned int)a1;

@end