@class NSArray, SPSearchQueryContext;

@interface SPClientSession : NSObject {
    NSArray *_searchDomains;
    BOOL _observersAdded;
    int _prefsToken;
    long long _contentFilter;
}

@property (readonly) NSArray *disabledBundleIds;
@property (retain) SPSearchQueryContext *currentQueryContext;
@property (nonatomic) BOOL infinitePatience;
@property long long maxUISuggestions;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)a0;

- (void)preheat;
- (id)init;
- (long long)contentFilters;
- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (BOOL)_setSearchDomains:(id)a0;
- (void)finishRanking:(id)a0 blendingDuration:(double)a1;
- (id)queryTaskWithContext:(id)a0;

@end
