@class NSArray, WBSHistory, WBSFrequentlyVisitedSitesBannedURLStore;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1 withMinimumVisitCount:(unsigned long long)a2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2 withMinimumVisitCount:(unsigned long long)a3;

- (id)_frequentlyVisitedSitesURLStringSet;
- (void)clearFrequentlyVisitedSites;
- (id)_canonicalizedFavoritesURLStringSet;
- (void).cxx_destruct;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end
