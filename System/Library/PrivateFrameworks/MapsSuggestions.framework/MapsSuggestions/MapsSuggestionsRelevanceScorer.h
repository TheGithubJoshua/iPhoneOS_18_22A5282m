@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (id)init;
- (id)confidenceForContacts:(id)a0 addresses:(id)a1;
- (id)confidenceForMapItems:(id)a0;
- (void).cxx_destruct;
- (void)preLoadAllScorers;
- (void)addScorer:(id)a0;

@end
