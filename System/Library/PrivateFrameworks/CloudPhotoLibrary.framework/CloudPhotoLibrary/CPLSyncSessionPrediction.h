@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

- (id)init;
- (id)redactedDescription;
- (BOOL)matchesXPCActivityCriteria:(id)a0;
- (BOOL)_oldPredictionWithKey:(const char *)a0 inCriteria:(id)a1 matchesPredictionWithKey:(id)a2;
- (void).cxx_destruct;
- (id)predictedValueForType:(id)a0;
- (id)description;
- (void)updateXPCActivityCriteria:(id)a0;
- (BOOL)matchesXPCActivity:(id)a0;
- (void)updateXPCActivity:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (id)initWithPredictedValuesAndTypes:(id)a0;

@end
