@class TabController, ContinuousReadingItem;

@interface ContinuousReadingController : NSObject {
    TabController *_tabController;
    int _activeDocumentBookmarkID;
    ContinuousReadingItem *_currentContinuousItem;
    ContinuousReadingItem *_nextContinuousItem;
    ContinuousReadingItem *_previousContinuousItem;
}

@property (nonatomic) BOOL unreadReadingListItemsOnly;

- (id)initWithTabController:(id)a0;
- (id)previousReadingListItem;
- (void)_clearCachedItems;
- (void).cxx_destruct;
- (id)currentReadingListItem;
- (void)_updateCachedItemsIfNeeded;
- (void)dealloc;
- (id)_itemAtIndex:(unsigned int)a0 inReadingList:(id)a1;
- (id)nextReadingListItem;
- (id)_tabDocument;

@end
