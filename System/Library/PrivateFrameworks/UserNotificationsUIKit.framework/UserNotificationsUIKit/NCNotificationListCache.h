@class NSString, NSMutableDictionary, NSMutableSet;
@protocol NCNotificationListCacheDelegate;

@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) NSMutableDictionary *contentRevealedCellHeightCache;
@property (retain, nonatomic) NSMutableDictionary *contentHiddenCellHeightCache;
@property (retain, nonatomic) NSMutableSet *notificationListCellCache;
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingHeaderCache;
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingControlsCache;
@property (retain, nonatomic) NSMutableDictionary *notificationListCellsForRequests;
@property (weak, nonatomic) id<NCNotificationListCacheDelegate> delegate;
@property (readonly, nonatomic) unsigned long long currentCacheSizeCount;
@property (readonly, nonatomic) unsigned long long activeNotificationCellCount;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNotificationRequest:(id)a0;
- (BOOL)invalidateCachedHeightIfNecessaryForNotificationRequest:(id)a0 updatedHeight:(double)a1 isContentRevealed:(BOOL)a2;
- (id)init;
- (double)heightForNotificationRequest:(id)a0 withFrameWidth:(double)a1 isContentRevealed:(BOOL)a2 shouldCalculateHeight:(BOOL)a3;
- (void)clearCachedHeightsForNotificationRequest:(id)a0;
- (void)clearCacheForNotificationRequest:(id)a0;
- (void)recycleNotificationListCoalescingHeaderCell:(id)a0;
- (void)_clearAllHeightCaches;
- (id)_newCellForNotificationRequest:(id)a0 viewControllerDelegate:(id)a1;
- (id)listCellForNotificationRequest:(id)a0 viewControllerDelegate:(id)a1 createNewIfNecessary:(BOOL)a2 shouldConfigure:(BOOL)a3;
- (id)_cachedHeaderCellWithTitle:(id)a0;
- (void)removeNotificationRequest:(id)a0;
- (id)_cachedRequestMatchingRequest:(id)a0;
- (void).cxx_destruct;
- (id)coalescingControlsCellWithWidth:(double)a0;
- (BOOL)recycleNotificationListCell:(id)a0;
- (id)coalescingHeaderCellWithTitle:(id)a0 clearAllText:(id)a1 width:(double)a2;
- (void)recycleNotificationListCoalescingControlsCell:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)_cachedNotificationListCellForRequest:(id)a0 viewControllerDelegate:(id)a1 shouldConfigure:(BOOL)a2;

@end
