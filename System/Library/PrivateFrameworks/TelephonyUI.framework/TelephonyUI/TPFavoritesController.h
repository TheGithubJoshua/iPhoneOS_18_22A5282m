@class CNContactStore, NSArray, NSString, TUCallProviderManager, CNFavorites, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate>

@property (readonly, nonatomic) NSCache *contactCache;
@property (readonly, nonatomic) NSCache *transportNameCache;
@property (readonly, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly, nonatomic) CNFavorites *favoritesManager;
@property (readonly, nonatomic) unsigned long long prefetchCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (copy, nonatomic) NSArray *favoritesEntries;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContactStore:(id)a0 prefetchCount:(unsigned long long)a1;
- (id)fetchFavoritesEntries;
- (id)fetchContactForFavoritesEntry:(id)a0 keyDescriptors:(id)a1;
- (void)moveEntryAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)fetchContactForFavoritesEntry:(id)a0;
- (id)fetchTransportNameForFavoritesEntry:(id)a0;
- (void)handleContactsFavoritesDidChangeNotification:(id)a0;
- (id)contactCacheKeyForFavoritesEntry:(id)a0;
- (void)removeEntriesAtIndexes:(id)a0;
- (id)transportNameForFavoritesEntry:(id)a0;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)a0;
- (id)transportNameCacheKeyForFavoritesEntry:(id)a0;
- (BOOL)canAddEntry;
- (void)dealloc;
- (void)addEntry:(id)a0;
- (id)contactForFavoritesEntry:(id)a0 keyDescriptors:(id)a1;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)a0;
- (id)contactForFavoritesEntry:(id)a0;

@end
