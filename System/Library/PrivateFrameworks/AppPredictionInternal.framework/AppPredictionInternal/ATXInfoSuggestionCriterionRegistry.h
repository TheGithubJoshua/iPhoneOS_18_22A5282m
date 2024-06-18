@class NSDictionary;

@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}

- (id)init;
- (id)availableCriterionIdentifiersForSourceIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)confidenceLevelForCriterion:(id)a0 sourceIdentifier:(id)a1;
- (BOOL)isSourceIdentifierRegistered:(id)a0;

@end
