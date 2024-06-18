@class NSMutableArray;

@interface VMUScanOverlay : NSObject

@property (readonly, nonatomic) NSMutableArray *refinementRules;

+ (BOOL)foundationHasNSSliceMemoryOptimization;
+ (id)defaultOverlayWithScanner:(id)a0;
+ (id)defaultOverlay;

- (void).cxx_destruct;
- (void)addMetadataRefinementRule:(id /* block */)a0;
- (id)initWithScanner:(id)a0;

@end
