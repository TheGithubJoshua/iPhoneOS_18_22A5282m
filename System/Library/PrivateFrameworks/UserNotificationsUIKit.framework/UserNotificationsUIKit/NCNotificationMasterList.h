@class NSDictionary, NCNotificationListCountIndicatorView, UILabel, NSMutableArray, NSMutableSet, NCNotificationCombinedSectionList, NSString, NCNotificationListCache, NCNotificationSummarizedSectionList, NCNotificationListInteractiveTransitionCoordinator, NSArray, NSMutableDictionary, NCNotificationListStalenessEventTracker, NCSuggestionManager, NCNotificationListView, NSSet, DNDModeConfiguration, NCDigestScheduleManager, NCNotificationListPersistentStateManager, NCNotificationListMigrationScheduler, NCNotificationStructuredSectionList, NCNotificationListRevealCoordinator, NSDate;
@protocol NCNotificationMasterListDelegate;

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCSuggestionManagerDelegate, NCNotificationListCacheDelegate, NCDigestScheduleManagerObserver, NCNotificationListPersistentStateManagerDelegate, NCNotificationListMigrationSchedulerDelegate, NCNotificationListCountIndicatorViewDelegate, NCNotificationListInteractiveTransitionCoordinatorDelegate, NCNotificationListComponent>

@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (readonly, copy, nonatomic) NSArray *notificationListSections;
@property (retain, nonatomic) NSMutableArray *notificationSections;
@property (retain, nonatomic) NCNotificationListRevealCoordinator *revealCoordinator;
@property (retain, nonatomic) NCNotificationListCache *notificationListCache;
@property (retain, nonatomic) NCNotificationListCache *notificationSummaryCache;
@property (retain, nonatomic) NCNotificationListCache *supplementaryCache;
@property (retain, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker;
@property (nonatomic) BOOL shouldAllowNotificationHistoryReveal;
@property (nonatomic, getter=isMissedSectionActive) BOOL missedSectionActive;
@property (nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled;
@property (retain, nonatomic) NCNotificationListPersistentStateManager *persistentStateManager;
@property (retain, nonatomic) NSMutableArray *supplementaryViewsSections;
@property (nonatomic, getter=isPerformingClearAll) BOOL performingClearAll;
@property (retain, nonatomic) NSMutableSet *loadedNotificationSections;
@property (retain, nonatomic) NCNotificationStructuredSectionList *prominentIncomingSectionList;
@property (retain, nonatomic) NCNotificationStructuredSectionList *incomingSectionList;
@property (retain, nonatomic) NCNotificationCombinedSectionList *historySectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *currentDigestSectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingDigestSectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingMissedSectionList;
@property (retain, nonatomic) NCDigestScheduleManager *digestScheduleManager;
@property (nonatomic) BOOL deferCurrentDigestPresentationForPersistedDataLoad;
@property (nonatomic, getter=isUpcomingDigestVisible) BOOL upcomingDigestVisible;
@property (retain, nonatomic) NCNotificationListMigrationScheduler *migrationScheduler;
@property (nonatomic) BOOL deferDigestMigration;
@property (retain, nonatomic) NSMutableArray *notificationRequestsPendingMigration;
@property (copy, nonatomic) id /* block */ scrollCompletionBlock;
@property (nonatomic) double scrollCompletionBlockOffsetThreshold;
@property (copy, nonatomic) NSDictionary *persistentStoredListInfo;
@property (nonatomic) unsigned long long currentListDisplayStyleSetting;
@property (nonatomic, getter=isCollapsibleNotificationListSupported) BOOL collapsibleNotificationListSupported;
@property (retain, nonatomic) NCNotificationListCountIndicatorView *countIndicatorView;
@property (retain, nonatomic) NSMutableDictionary *notificationListDisplayStyleSettingsForReason;
@property (nonatomic, getter=isOverlayFooterContentVisible) BOOL overlayFooterContentVisible;
@property (retain, nonatomic) NCNotificationListInteractiveTransitionCoordinator *interactiveTransitionCoordinator;
@property (nonatomic, getter=isPerformingExclusiveScrollInteractiveTranslation) BOOL performingExclusiveScrollInteractiveTranslation;
@property (nonatomic) BOOL overrideMigrationToHistory;
@property (retain, nonatomic) UILabel *overrideMigrationOverlayLabel;
@property (nonatomic, getter=isListDisplayStyleHiddenForUserInteraction) BOOL listDisplayStyleHiddenForUserInteraction;
@property (weak, nonatomic) id<NCNotificationMasterListDelegate> delegate;
@property (retain, nonatomic) NCNotificationListView *masterListView;
@property (retain, nonatomic) NCSuggestionManager *suggestionManager;
@property (nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic) BOOL hasVisibleUrgentBreakthroughContent;
@property (readonly, nonatomic) unsigned long long totalNotificationCount;
@property (nonatomic, getter=isOnboardingSummaryVisible) BOOL onboardingSummaryVisible;
@property (copy, nonatomic) DNDModeConfiguration *activeDNDModeConfiguration;
@property (readonly, nonatomic, getter=isScrollingListContent) BOOL scrollingListContent;
@property (nonatomic) BOOL expandsVisibleRegionOnSignificantScroll;
@property (nonatomic) BOOL hideNotificationCountIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (copy, nonatomic) NSString *logDescription;
@property (readonly, copy, nonatomic) NSDate *comparisonDate;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (BOOL)notificationListRevealCoordinatorShouldAllowRevealTransition:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)_updateSystemSettingsForUpdatedNotificationListDisplayStyleSetting:(unsigned long long)a0;
- (void)suggestionManager:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)suggestionManagerRequestsCurrentModeConfiguration:(id)a0;
- (void)_migrateOnScheduleNotificationRequestsFromProminentIncomingSectionToIncomingSection:(id)a0;
- (id)init;
- (void)_toggleCurrentDigestSectionListVisibilityInHistorySection;
- (void)_performDeferredMigrationIfNecessary;
- (BOOL)notificationListInteractiveTransitionCoordinatorRequestsIsHiddenListRevealed:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)notificationListCountIndicatorViewLongPressed:(id)a0 presentingView:(id)a1;
- (void)_configureNotificationSectionList:(id)a0 notificationCache:(id)a1 notificationListViewRevealed:(BOOL)a2 logDescription:(id)a3;
- (void)_dissolveUpcomingDigestSectionListToHistorySection;
- (unsigned long long)notificationListInteractiveTransitionCoordinator:(id)a0 requestsIndexForInteractiveListView:(id)a1;
- (void)_removeCurrentDigestSectionListFromHistorySectionList;
- (BOOL)notificationStructuredSectionList:(id)a0 shouldFilterNotificationRequest:(id)a1;
- (BOOL)containsNotificationRequest:(id)a0;
- (void)notificationListRevealCoordinator:(id)a0 updatedRevealState:(BOOL)a1;
- (void)suggestionManager:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)notificationStructuredSectionListRequestsClearingSection:(id)a0;
- (BOOL)notificationStructuredSectionList:(id)a0 areNotificationsLoadedForSectionIdentifier:(id)a1;
- (void)setOverrideNotificationListDisplayStyleSetting:(unsigned long long)a0 forReason:(id)a1 hideNotificationCount:(BOOL)a2;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (BOOL)handleTapOnNotificationListBaseComponent:(id)a0;
- (void)notificationStructuredSectionListDidClearAllNotificationRequests:(id)a0;
- (BOOL)_isProminentNotificationRequest:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)testPromoteUpcomingDigestToCurrentDigest;
- (void)notificationListBaseComponent:(id)a0 requestsScrollingToContentOffset:(double)a1 withCompletion:(id /* block */)a2;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (unsigned long long)notificationListInteractiveTransitionCoordinator:(id)a0 requestsCountForInteractiveListView:(id)a1;
- (void)_updateUpcomingDigestSectionListWithDigestInfo:(id)a0;
- (id)suggestionManager:(id)a0 notificationRequestForUUID:(id)a1;
- (id)_missedSectionTitleForDNDMode:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)notificationStructuredSectionList:(id)a0 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)a1 isLongLook:(BOOL)a2;
- (void)_removeCurrentDigestSectionListFromContainingSectionList;
- (void)notificationStructuredSectionList:(id)a0 transitionedGroupedStateIsGrouped:(BOOL)a1;
- (void)suggestionManager:(id)a0 requestsPresentingNotificationManagementViewType:(unsigned long long)a1 forNotificationRequest:(id)a2 withPresentingView:(id)a3;
- (void)_migrateNotificationsFromList:(id)a0 toList:(id)a1 passingTest:(id /* block */)a2 filterRequestsPassingTest:(id /* block */)a3 hideToList:(BOOL)a4 clearRequests:(BOOL)a5 filterForDestination:(BOOL)a6 animateRemoval:(BOOL)a7 reorderGroupNotifications:(BOOL)a8;
- (void)_updateVisibilityOfHistorySection;
- (void)recycleView:(id)a0;
- (void)_migrateUpcomingDigestSectionListToCurrentDigestSectionList;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (id)_listInfoForStateCapture;
- (void)_migrateNotificationsFromProminentIncomingSectionToIncomingSection;
- (BOOL)_isNotificationRequest:(id)a0 forSectionList:(id)a1;
- (id)_listInfoForPersistentState;
- (void)_migrateUpcomingMissedSectionToIncoming;
- (BOOL)shouldScrollToTopForNotificationListBaseComponent:(id)a0;
- (Class)notificationListCacheNotificationViewControllerClass:(id)a0;
- (void)suggestionManager:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)forwardInvocation:(id)a0;
- (id)notificationRequestWithNotificationIdentifier:(id)a0 sectionIdentifier:(id)a1;
- (void)_updateNotificationCountIndicatorViewAnimated:(BOOL)a0;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)_insertSectionListInHistorySectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (id)_sectionsForStateDump;
- (void)suggestionManager:(id)a0 requestsUpdatingContentForNotificationRequest:(id)a1;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (id)subListsForNotificationListRevealCoordinator:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)insertNotificationRequest:(id)a0;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_isAlertingNotificationRequest:(id)a0;
- (void)_updateNotificationListPersistentState;
- (void)reloadRemoteSuggestions;
- (void)clearAll;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (id)_newMissedSectionWithTitle:(id)a0 summaryHeading:(id)a1 logDescription:(id)a2 dndMode:(id)a3;
- (void)migrateNotificationsFromIncomingSectionToHistorySectionAndHideHistorySection:(BOOL)a0;
- (void)_removeCurrentDigestSectionListFromSectionList:(id)a0;
- (void)persistentStateManager:(id)a0 didFetchStoredListInfo:(id)a1;
- (void)notificationListInteractiveTransitionCoordinator:(id)a0 didUpdateListDisplaySetting:(unsigned long long)a1 isPersistentSetting:(BOOL)a2 hideRevealedList:(BOOL)a3;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (void)_updateNotificationListDisplayStyleSetting;
- (void)_scheduleNotificationRequestsForMigrationFromIncomingListPassingTest:(id /* block */)a0;
- (BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)a0;
- (id)_digestTestRecipe;
- (void)publishUpcomingDigest:(id)a0;
- (void)reloadNotificationRequest:(id)a0;
- (void)_clearAllNotifications:(BOOL)a0 supplementaryViewControllers:(BOOL)a1;
- (id)_newSummaryOrderProviderOfType:(unsigned long long)a0 fromSummaryOrderProvider:(id)a1;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)testDigestTimerFired;
- (BOOL)_shouldInsertCurrentDigestIntoMissedSectionList;
- (void)_toggleUpcomingDigestSectionListVisibility;
- (long long)_atxDigestDeliveryTimeForDeliveryOrder:(long long)a0;
- (void)_regroupAllNotificationGroups;
- (void)_setupNotificationSectionLists;
- (void)testMigrateCurrentDigestToHistory;
- (void)_addStateCaptureBlock;
- (void)notificationListBaseComponentRequestsClearingAll:(id)a0;
- (void)notificationListCountIndicatorViewTapped:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (id)_newSummaryOrderProviderOfType:(unsigned long long)a0 summaryHeading:(id)a1 summaryDate:(id)a2 atxDigestDeliveryTime:(long long)a3 isOnboardingSummary:(BOOL)a4;
- (id)_visibleNotificationRequests;
- (void)listViewControllerPresentedByUserAction;
- (void)_sortNotificationGroupsIfNecessary;
- (void)removeNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (void)_insertCurrentDigestSectionListToSectionList:(id)a0 atIndex:(unsigned long long)a1;
- (id)suggestionManager:(id)a0 requestsSectionSettingsForSectionIdentifier:(id)a1;
- (id)_filterNotificationsInGroupLists:(id)a0 withDestinationsForSectionList:(id)a1;
- (void)_removeCurrentDigestSectionList;
- (void)_notificationListDidChangeContent;
- (void)_clearCountIndicatorViewAnimated:(BOOL)a0;
- (void)_updateIndexForReveal;
- (void)persistentStateManager:(id)a0 finishedLoadingDataForSectionType:(unsigned long long)a1;
- (void)_migrateOnScheduleNotificationRequests:(id)a0 fromSection:(id)a1 toSection:(id)a2 clearRequests:(BOOL)a3 filterForDestination:(BOOL)a4 animateRemoval:(BOOL)a5;
- (id)_sectionForStoredNotificationRequestOfSectionType:(unsigned long long)a0;
- (void)removeOverrideNotificationListDisplayStyleSettingForReason:(id)a0;
- (void)_configureCurrentDigestSectionListWithDigestInfo:(id)a0 sectionType:(unsigned long long)a1 summaryOrderProviderType:(unsigned long long)a2;
- (id)_sectionListsForPersistentState;
- (void)_toggleCurrentDigestSectionListVisibility;
- (id)_newDigestSectionListWithTitle:(id)a0 sectionType:(unsigned long long)a1 summaryOrderProvider:(id)a2 logDescription:(id)a3;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)activeDNDMode;
- (id)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)a0 identifier:(id)a1 withDescription:(id)a2;
- (void)_toggleVisibilityInHistorySectionListForSectionList:(id)a0 atIndex:(unsigned long long)a1 isSectionHidden:(BOOL)a2 animated:(BOOL)a3;
- (void)_insertNotificationRequest:(id)a0;
- (void)_insertCurrentDigestSectionList;
- (BOOL)_isPersistentStateCurrentDigestInMissedSection;
- (void)_scheduleNotificationDigestMigrationIfNecessary;
- (void)_configureInteractiveTransitionCoordinatorIfNecessary;
- (void)_migrateOnScheduleNotificationRequestsFromIncomingSectionToHistorySection:(id)a0;
- (BOOL)_isCurrentDigestListInMissedSectionList;
- (void)_upgradeCurrentDigestSectionListForPromotionAboveFold;
- (BOOL)_isCurrentDigestListInHistorySectionList;
- (void)_updateVisibilityForSectionLists;
- (void)revealCoordinatorDidScrollToReveal:(id)a0;
- (void)_updateVisibleRectForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)suggestionManager:(id)a0 setModeConfiguration:(id)a1;
- (void)_configureOverrideMigrationOverlayLabelIfNecessary;
- (void)notificationListMigrationScheduler:(id)a0 requestsMigratingNotificationRequests:(id)a1;
- (void)_removeSectionListInHistorySectionList:(id)a0 animated:(BOOL)a1;
- (void)_insertCurrentDigestSectionListToMissedSectionList;
- (void)suggestionManager:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)_dissolveCurrentDigestSectionListToHistorySection;
- (void)_updateOverrideMigrationOverlayLabelWithText:(id)a0 forOverrideState:(BOOL)a1;
- (void)toggleMissedSectionActive:(BOOL)a0 forDNDMode:(id)a1 hideVisibleNotifications:(BOOL)a2;
- (void)_configureUpcomingDigestSectionListWithDigestInfo:(id)a0;
- (BOOL)_isCurrentDigestListAboveHistorySectionList;
- (void)_configureUpcomingMissedSectionForDNDMode:(id)a0;
- (BOOL)_shouldInsertNotificationRequestToProminentIncomingSectionList:(id)a0;
- (id)overlayFooterViewForNotificationList:(id)a0;
- (void)updateListViewVisibleRect;
- (void)testClearPersistentStateManagerForTesting;
- (id)_notificationSectionListsForEnumeration;
- (void)migrateNotificationsFromIncomingSectionToHistorySection;
- (void)testDigestTimerRevoke;
- (void)_removeCurrentDigestSectionListFromMissedSectionList;
- (BOOL)notificationListInteractiveTransitionCoordinatorRequestsIsCurrentDigestVisible:(id)a0;
- (void)_insertCurrentDigestSectionListToHistorySectionList;
- (void)testDigestTimerUpdated;
- (id)_sectionForNotificationRequest:(id)a0;
- (id)_notificationListSections;
- (id)_notificationMigrationOverrideTestRecipe;
- (void)persistentStateManager:(id)a0 didFetchMigrationTime:(id)a1 forNotificationRequest:(id)a2;
- (BOOL)shouldDelayDeliveryOfNotificationRequest:(id)a0;
- (void)_toggleUpcomingMissedSectionListVisibility;
- (void)notificationListMigrationSchedulerRequestsMigratingNotificationDigest:(id)a0;
- (void)_migrateCurrentDigestSectionListToReadSection;
- (void)persistentStateManager:(id)a0 didFetchSummaryMigrationTime:(id)a1;
- (void)testDissolveCurrentDigestToHistory;
- (void)revokeUpcomingDigest:(id)a0;
- (BOOL)notificationListInteractiveTransitionCoordinatorRequestsIsScrollingListContent:(id)a0;
- (void)persistentStateManager:(id)a0 hasStoredDataForSectionType:(unsigned long long)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (unsigned long long)_upcomingDigestSectionListIndexInHistorySectionList;
- (void)notificationListInteractiveTransitionCoordinatorRequestsMigratingProminentNotificationsForHiddenSetting:(id)a0;
- (void)publishScheduledDigest:(id)a0 upcomingDigest:(id)a1;

@end
