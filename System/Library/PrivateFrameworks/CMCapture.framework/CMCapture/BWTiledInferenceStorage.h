@class NSArray, BWInferenceSimpleTextureStorage;

@interface BWTiledInferenceStorage : BWInferenceProviderStorage {
    BWInferenceSimpleTextureStorage *_textureStorage;
}

@property (readonly, nonatomic) NSArray *espressoStorages;

- (id)textureStorage;
- (void)clear;
- (void)dealloc;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1 espressoStorages:(id)a2;

@end
