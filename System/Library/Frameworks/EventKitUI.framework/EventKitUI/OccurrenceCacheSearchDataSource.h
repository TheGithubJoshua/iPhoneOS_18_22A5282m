@class EKSpotlightSearch, NSString, NSMutableDictionary, NSArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resultsLock;
    NSArray *_sortedDays;
    BOOL _sortedDaysUpdated;
    int _searchSeed;
}

- (void)invalidateCachedOccurrences;
- (BOOL)supportsInvitations;
- (void)_updateCachedDays;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)_setCachedDaysAndNotify:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_createCachedDays;
- (BOOL)supportsFakeTodaySection;
- (void)dealloc;
- (void)searchWithTerm:(id)a0;
- (void)stopSearching;

@end
