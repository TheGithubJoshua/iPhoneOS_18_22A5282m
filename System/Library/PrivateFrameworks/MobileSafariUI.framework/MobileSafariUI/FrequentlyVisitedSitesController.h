@class WebBookmarkCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    BOOL _ignoreBookmarksFolderChangeNotifications;
}

@property (class, readonly, nonatomic) FrequentlyVisitedSitesController *sharedController;

- (id)_frequentlyVisitedSitesURLStringSet;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (void)clearFrequentlyVisitedSites;
- (void)promoteFrequentlyVisitedSite:(id)a0 toFavoriteAtIndex:(unsigned long long)a1;
- (id)_existingIconsDataFromBookmarksDB;
- (void)_receivedBookmarksFolderContentChangedNotification:(id)a0;
- (id)_canonicalizedFavoritesURLStringSet;
- (void).cxx_destruct;
- (id)frequentlyVisitedSites;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_updateCachedFrequentlyVisitedSitesWithCandidates:(id)a0;
- (id)initWithBookmarkCollection:(id)a0;
- (void)banFrequentlyVisitedSite:(id)a0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)a1;
- (BOOL)_saveFrequentlyVisitedSites:(id)a0;

@end
