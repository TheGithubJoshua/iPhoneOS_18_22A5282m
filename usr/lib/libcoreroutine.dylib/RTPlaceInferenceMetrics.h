@class NSMutableDictionary, NSDate;

@interface RTPlaceInferenceMetrics : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)init;
- (void)setPlaceInferences:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithClientIdentifier:(id)a0 placeInferenceOptions:(id)a1;
- (void)setTopPlaceInference:(id)a0;
- (id)objectForKey:(id)a0;
- (double)entropyOfConflictFromTopResults:(id)a0;
- (void)setTopPersonalizedLabelsInferredMapItems:(id)a0 topBluePOIInferredMapItem:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)setPlaceInferenceOptions:(id)a0;
- (void)submitMetrics;

@end
