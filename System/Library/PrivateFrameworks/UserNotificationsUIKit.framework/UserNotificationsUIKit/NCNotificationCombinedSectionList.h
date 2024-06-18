@class NSMutableArray;

@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    BOOL _adjustsFontForContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *sectionLists;
@property (retain, nonatomic) NSMutableArray *chronologicalSectionLists;

- (unsigned long long)indexOfSectionList:(id)a0;
- (id)_allSectionLists;
- (void)insertNotificationSectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)containsNotificationRequest:(id)a0;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (id)sectionListAtIndex:(unsigned long long)a0;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (BOOL)containsSectionList:(id)a0;
- (unsigned long long)notificationCount;
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)removeNotificationSectionList:(id)a0 animated:(BOOL)a1;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void)insertNotificationSectionListChronologically:(id)a0 animated:(BOOL)a1;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)sortNotificationGroupListsIfNecessary;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (id)allNotificationRequests;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearAll;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (id)orderedNotificationListComponents;
- (BOOL)hasVisibleContentToReveal;
- (void)reloadNotificationRequest:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_performOperationOnAllSectionLists:(id /* block */)a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (unsigned long long)count;
- (BOOL)adjustForContentSizeCategoryChange;

@end
