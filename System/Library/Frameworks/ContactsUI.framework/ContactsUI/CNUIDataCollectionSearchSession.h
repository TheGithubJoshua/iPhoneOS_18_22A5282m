@interface CNUIDataCollectionSearchSession : NSObject

@property (nonatomic) BOOL pendingResults;
@property (nonatomic) BOOL pendingSuggestionsResults;

+ (void)end;
+ (id)currentSession;
+ (void)begin;

- (void)didFetchResultSuggested:(BOOL)a0;
- (void)didSelectResult:(id)a0;
- (void)searchStringDidChange;

@end
