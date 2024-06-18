@class ATXContextHeuristics;

@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics *_heuristics;
}

+ (id)sharedInstance;

- (id)init;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)a0;
- (void)contextHeuristics:(id)a0 didUpdateSpotlightRecents:(id)a1;
- (void)contextHeuristics:(id)a0 didUpdateSuggestions:(id)a1;
- (id)initWithHeuristics:(id)a0;
- (void).cxx_destruct;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)a0;

@end
