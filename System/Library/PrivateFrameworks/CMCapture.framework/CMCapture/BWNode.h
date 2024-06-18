@class BWNodeInput, NSString, NSArray, BWGraph, BWNodeOutput, NSMutableArray;
@protocol BWNodeRenderDelegate;

@interface BWNode : NSObject {
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    BOOL _singleInput;
    BOOL _singleOutput;
    long long _configurationID;
    BWNodeInput *_input;
    BWNodeOutput *_output;
}

@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks;
@property (nonatomic) BOOL supportsLiveReconfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly) NSString *nodeType;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (nonatomic) id<BWNodeRenderDelegate> renderDelegate;
@property (readonly, nonatomic) BOOL hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph *graph;
@property (nonatomic) int deferredPreparePriority;

+ (void)initialize;

- (long long)configurationID;
- (void)suspendResources;
- (void)setConfigurationID:(long long)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)init;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)addInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)makeCurrentConfigurationLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (id)description;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)addOutput:(id)a0;
- (BOOL)allInputsHaveReachedState:(int)a0;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1 forAttachedMediaKey:(id)a2;
- (BOOL)input:(id)a0 hasReachedState:(int)a1;

@end
