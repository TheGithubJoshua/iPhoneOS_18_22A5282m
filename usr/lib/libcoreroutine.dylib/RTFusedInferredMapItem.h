@class RTMapItem;

@interface RTFusedInferredMapItem : NSObject

@property (retain, nonatomic) RTMapItem *mapItem;
@property (nonatomic) double confidence;
@property (nonatomic) unsigned long long source;

+ (id)sortFusedInferredMapItems:(id)a0 confidenceEqualityEpsilon:(double)a1 referenceLocation:(id)a2 distanceCalculator:(id)a3 ascending:(BOOL)a4;

- (id)init;
- (id)initWithMapItem:(id)a0 confidence:(double)a1 source:(unsigned long long)a2;
- (id)initWithInferredMapItem:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)convertToInferredMapItem;

@end
