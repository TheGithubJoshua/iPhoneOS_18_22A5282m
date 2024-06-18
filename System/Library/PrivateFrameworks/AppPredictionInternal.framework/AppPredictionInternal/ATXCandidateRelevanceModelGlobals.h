@class NSDictionary;

@interface ATXCandidateRelevanceModelGlobals : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isPipelineEnabled;
- (int)maxCategoricalFeaturesCount;
- (void).cxx_destruct;

@end
