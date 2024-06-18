@class SPQueryTask, NSArray, NSString, SFResultSection, SPQueryResponse, NSObject;
@protocol SPSearchAgentDelegate;

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {
    long long _updatesDisabled;
    NSString *_lastQueryString;
}

@property (retain) SPQueryTask *queryTask;
@property (retain) SPQueryResponse *lastResponse;
@property BOOL springBoardIsActive;
@property BOOL infinitePatience;
@property BOOL queryPartiallyComplete;
@property BOOL queryComplete;
@property BOOL forceStableResults;
@property (readonly) BOOL wantsCompletions;
@property (readonly) NSArray *sections;
@property (readonly) SFResultSection *searchThroughSection;
@property (weak) NSObject<SPSearchAgentDelegate> *delegate;
@property long long maxUISuggestions;

+ (void)preheat;
+ (id)sharedInstance;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;
+ (id)sharedFullZWKInstance;
+ (id)sharedGeneralInstance;

- (void)didReceiveResponse:(id)a0;
- (void)clear;
- (void)updatesDisabled;
- (void)activate;
- (void)deactivate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updatesEnabled;
- (BOOL)queryInProgress;
- (void)updateWithQueryContext:(id)a0;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)resultsDidBecomeInvalid:(id)a0;
- (BOOL)_suggestionsReadyForDisplay;
- (void)invalidateCurrentQuery;
- (void)invalidateQuery:(id)a0;
- (void)updateWithResponse:(id)a0;

@end
