@class NSString, NSSet;
@protocol BWInferenceSubmittable, BWInferencePropagatable, BWInferenceExtractable, BWInferenceExecutable;

@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceExtractable, BWInferenceJobProvider> {
    NSSet *_videoPropagatedToStorage;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) id<BWInferenceExecutable> executable;
@property (readonly, nonatomic) id<BWInferenceSubmittable> submittable;
@property (readonly, nonatomic) id<BWInferenceExtractable> extractable;
@property (readonly, nonatomic) id<BWInferencePropagatable> propagatable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)newStorage;
- (int)extractFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 usingVideoRequirements:(id)a1 metadataRequirements:(id)a2 toStorage:(id)a3;
- (int)extractFromStorage:(id)a0 usingVideoRequirements:(id)a1 metadataRequirements:(id)a2 toSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (void)dealloc;
- (id)initWithVideoPropagatedToStorage:(id)a0;

@end
