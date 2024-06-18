@class SFStartLocalSearchFeedback, NSObject, PARSession;
@protocol OS_dispatch_queue;

@interface PXSearchParsecAnalyticsSession : NSObject

@property (readonly, nonatomic) PARSession *session;
@property (nonatomic) long long currentQueryId;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartSearchFeedback;
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartZeroKeywordLoadFeedback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportingQueue;

+ (id)sharedSession;

- (void)reportSearchResultSelected:(id)a0;
- (id)init;
- (void)reportSearchSuggestions:(id)a0 searchResultSections:(id)a1 visibleIndexPaths:(id)a2 reportVisibleResultChangesOnly:(BOOL)a3;
- (void)reportPhotosAppQuit;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithPreviousSearchText:(id)a0 previousSearchTokens:(id)a1;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithSpotlightSearchActivity;
- (void)reportRecentSearchSelectedWithSearchText:(id)a0 searchTokens:(id)a1;
- (void)_reportPhotosAppLaunchedOrEnteredForegroundEventWithFeedback:(id)a0;
- (void)reportZeroKeywordLoadBegan;
- (void)reportSearchTabSelected;
- (void)reportZeroKeywordSections:(id)a0 visibleIndexPaths:(id)a1 reportVisibleResultChangesOnly:(BOOL)a2;
- (void)reportSearchFieldContentChanged:(id)a0 searchTokens:(id)a1;
- (void)reportPhotosAppEnteredBackground;
- (void)reportSearchFieldCancelButtonSelected;
- (void)reportShowMoreResultsSelected:(BOOL)a0 searchResultsSection:(id)a1;
- (void)reportSearchQueryExecutionCompleted;
- (void)reportSearchFieldContentCleared;
- (void)reportZeroKeywordLoadFinished;
- (void).cxx_destruct;
- (void)reportSearchSuggestionSelected:(id)a0;
- (void)_reportFeedback:(id)a0;
- (void)reportZeroKeywordSelected:(id)a0 searchToken:(id)a1;
- (void)reportSearchTabDeselected;

@end
