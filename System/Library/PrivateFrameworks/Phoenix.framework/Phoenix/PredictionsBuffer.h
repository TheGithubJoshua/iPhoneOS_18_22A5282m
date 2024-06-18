@class NSMutableArray, AXPhoenixClassifierConfiguration;

@interface PredictionsBuffer : NSObject {
    NSMutableArray *_predictions;
    NSMutableArray *_counts;
    AXPhoenixClassifierConfiguration *_configuration;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)addPrediction:(id)a0;
- (id)logBuffer;
- (struct { unsigned long long x0; unsigned long long x1; })bestPredictionUsingPolicyOption:(int)a0;
- (id)predictionCounts;

@end
