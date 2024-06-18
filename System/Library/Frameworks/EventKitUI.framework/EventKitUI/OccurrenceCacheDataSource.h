@class NSString, NSSet, EKEventStore, NSMutableArray;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchLock;
    NSMutableArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1 background:(BOOL)a2 includeGivenSection:(BOOL)a3;
- (long long)cachedDayCount;
- (id)_cachedDays;
- (void)fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1;
- (void)invalidateCachedOccurrences;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (id)indexPathsForOccurrence:(id)a0;
- (BOOL)supportsInvitations;
- (id)faultOccurrencesForDay:(id)a0 inOccurrencesArray:(id)a1 index:(long long)a2 limit:(long long *)a3 cacheSeed:(int)a4;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (id)dateAtDayIndex:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (void)setCachedDays:(id)a0;
- (id)_createCachedDays;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (BOOL)supportsFakeTodaySection;
- (void)searchWithTerm:(id)a0;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)a0;
- (id)_cachedOccurrenceAtIndexPath:(id)a0;
- (id)_mutableDayDictionaryAtIndex:(unsigned long long)a0;
- (BOOL)cachedOccurrencesAreLoaded;
- (void)stopSearching;

@end
