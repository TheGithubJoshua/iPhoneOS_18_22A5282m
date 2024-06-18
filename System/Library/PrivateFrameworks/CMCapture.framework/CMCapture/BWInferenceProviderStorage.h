@class NSArray, NSDictionary, NSString, NSMutableDictionary;
@protocol BWInferenceTextureStorage;

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {
    NSMutableDictionary *_pixelBufferByRequirement;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
}

@property (readonly, nonatomic) BWInferenceProviderStorage *inferenceStorage;
@property (readonly, nonatomic) id<BWInferenceTextureStorage> textureStorage;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBufferPools;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBuffers;
@property (retain, nonatomic) NSDictionary *inferenceResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setPixelBuffer:(struct __CVBuffer { } *)a0 forRequirement:(id)a1;
- (void)setPixelBufferPool:(id)a0 forRequirement:(id)a1;
- (void)clear;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingRequirement:(id)a0 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (struct __CVBuffer { } *)pixelBufferForRequirement:(id)a0;
- (id)pixelBufferPoolForRequirement:(id)a0;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (struct opaqueCMSampleBuffer { } *)newSampleBufferSatisfyingCloneRequirement:(id)a0;

@end
