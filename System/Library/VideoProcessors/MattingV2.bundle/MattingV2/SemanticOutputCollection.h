@class NSMutableDictionary, MPSImageSpatioTemporalGuidedFilterDescriptor, MPSImageSpatioTemporalGuidedFilter, NSMutableArray, NSNumber;

@interface SemanticOutputCollection : NSObject {
    MPSImageSpatioTemporalGuidedFilterDescriptor *_spatioTemporalFilterDescriptor;
}

@property (retain, nonatomic) MPSImageSpatioTemporalGuidedFilter *spatioTemporalFilter;
@property (retain, nonatomic) NSMutableArray *semanticOutputs;
@property (retain, nonatomic) NSNumber *iterations;
@property (retain, nonatomic) NSMutableDictionary *_sourceTextures;
@property (retain, nonatomic) NSMutableDictionary *_destinationTextures;
@property (nonatomic) BOOL useDepthFilter;

- (id)init;
- (int)allocateResources:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isCompatibleWith:(id)a0;
- (BOOL)add:(id)a0 with:(id)a1;

@end
