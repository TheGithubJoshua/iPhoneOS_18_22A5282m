@class NSString, SGSMMutableSearchState, NSCache;
@protocol SGSuggestionsServiceEventsProtocol;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener> {
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id<SGSuggestionsServiceEventsProtocol> _suggestionsService;
    NSCache *_eventLastInteractionTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetState;
- (void)searchViewDidDisappear:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)didRankSections:(id)a0;
- (id)init;
- (void)didEngageResult:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)_saveAndUnsetState;
- (id)_eventIdentifierFromSearchResult:(id)a0;
- (void)_restoreStateIfUnset;
- (void).cxx_destruct;

@end
