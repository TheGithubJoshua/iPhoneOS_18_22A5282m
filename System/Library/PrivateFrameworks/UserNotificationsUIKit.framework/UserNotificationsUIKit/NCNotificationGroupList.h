@class NSDate, NSString, _UILegibilitySettings, NSArray, NSSet, NSMutableDictionary, NCNotificationRequest, NSMutableArray, NCNotificationListCell, NCNotificationSummaryBuilder, NCNotificationSectionSettings;
@protocol NCNotificationListPresentableGroupDelegate, NCNotificationGroupListDelegate;

@interface NCNotificationGroupList : NCNotificationListPresentableGroup <NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellActionProviding, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent>

@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (retain, nonatomic) NSMutableArray *orderedRequests;
@property (retain, nonatomic) NSMutableDictionary *contentProviders;
@property (retain, nonatomic) NSMutableDictionary *clockSnoozeAlarmContentProviders;
@property (retain, nonatomic) NCNotificationRequest *leadingNotificationRequest;
@property (retain, nonatomic) NCNotificationSummaryBuilder *summaryBuilder;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NCNotificationListCell *cellRecycledWhilePresentingLongLook;
@property (nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow;
@property (nonatomic) BOOL shouldReloadLeadingNotificationRequest;
@property (copy, nonatomic) NSDate *comparisonDate;
@property (weak, nonatomic) id<NCNotificationListPresentableGroupDelegate, NCNotificationGroupListDelegate> delegate;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (readonly, nonatomic) NSArray *persistentNotificationRequests;
@property (readonly, nonatomic) NSArray *criticalAlerts;
@property (readonly, nonatomic) BOOL containsNonPersistentNotificationRequests;
@property (retain, nonatomic) NCNotificationSectionSettings *notificationSectionSettings;
@property (nonatomic, getter=isClockNotificationGroup) BOOL clockNotificationGroup;
@property (nonatomic, getter=isClearingAllNotificationRequestsForCellHorizontalSwipe) BOOL clearingAllNotificationRequestsForCellHorizontalSwipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (copy, nonatomic) NSString *logDescription;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)notificationViewControllerWillBeginUserInteraction:(id)a0;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (void)notificationViewController:(id)a0 executeAction:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)mergeNotificationRequests:(id)a0;
- (id)notificationViewControllerContainerViewProviderForExpandedContent:(id)a0;
- (id)headerText;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)toggleGroupedState;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)a0;
- (unsigned long long)_lockScreenPriorityForNotificationRequest:(id)a0;
- (BOOL)shouldContinuePresentingActionButtonsForNotificationListCell:(id)a0;
- (id)_optionsActionForRequest:(id)a0;
- (id)supplementaryActionsForNotificationListCell:(id)a0;
- (id)clearAllText;
- (BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)a0;
- (BOOL)shouldShowDefaultActionForNotificationListCell:(id)a0;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (unsigned long long)_existingIndexForNotificationRequest:(id)a0;
- (BOOL)_handleTapToExpandGroupForNotificationRequest:(id)a0;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)a0;
- (long long)_compareNotificationRequest:(id)a0 withNotificationRequest:(id)a1;
- (BOOL)isRichNotificationContentViewForNotificationViewController:(id)a0;
- (unsigned long long)_insertionIndexForNotificationRequest:(id)a0;
- (void)reloadLeadingNotificationRequest;
- (BOOL)_shouldShowOpenActionToPerformLongLookPresentationForRequest:(id)a0;
- (BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)a0;
- (void)notificationViewControllerWillDismissForCancelAction:(id)a0;
- (BOOL)containsNotificationRequest:(id)a0;
- (id)_currentCellForNotificationRequest:(id)a0;
- (id)_cachedCellForNotificationRequest:(id)a0 createNewIfNecessary:(BOOL)a1 shouldConfigure:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notificationViewController:(id)a0 initialFrameForPresentingLongLookFromView:(id)a1;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)_updateSummaryBuilderForNewLeadingNotificationRequest:(id)a0 oldLeadingNotificationRequest:(id)a1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (id)notificationViewController:(id)a0 staticContentProviderForNotificationRequest:(id)a1;
- (void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)a0;
- (BOOL)isLeadingNotificationRequest:(id)a0;
- (void)recycleView:(id)a0;
- (id)_presentLongLookActionWithViewTitleForRequest:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)_shouldShowOptionsActionForRequest:(id)a0;
- (BOOL)shouldShowSupplementaryActionsForNotificationListCell:(id)a0;
- (BOOL)isGroupForNotificationRequest:(id)a0;
- (id)_openActionForRequest:(id)a0;
- (unsigned long long)_lockScreenPersistenceForNotificationRequest:(id)a0;
- (void)notificationViewController:(id)a0 shouldFinishLongLookTransitionForTrigger:(long long)a1 withCompletionBlock:(id /* block */)a2;
- (void)insertNotificationRequest:(id)a0;
- (void)notificationViewController:(id)a0 didUpdatePreferredContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)clearAll;
- (BOOL)matchesGroup:(id)a0;
- (void)reloadNotificationRequest:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)a0;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (long long)notificationViewControllerDateFormatStyle:(id)a0;
- (void)_executeClearActionForRequest:(id)a0;
- (BOOL)notificationViewControllerShouldAllowExpandedPlatterInteraction:(id)a0;
- (id)_clearActionForRequest:(id)a0 clearAll:(BOOL)a1;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (void)updateComparisonDate;
- (double)_cachedHeightForNotificationRequest:(id)a0 isLeadingNotificationRequest:(BOOL)a1 withWidth:(double)a2;
- (void)removeNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsCriticalNotificationRequest:(id)a0;
- (void)notificationViewControllerDidEndUserInteraction:(id)a0;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)a0;
- (id)_presentLongLookActionWithOpenTitleForRequest:(id)a0;
- (BOOL)_shouldShowViewActionForRequest:(id)a0;
- (void)notificationViewController:(id)a0 requestPermissionToExecuteAction:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)notificationViewController:(id)a0 isPerformingHoverHighlighting:(BOOL)a1;
- (void)_reloadNotificationCellAtIndex:(unsigned long long)a0;
- (BOOL)handleTapOnNotificationViewController:(id)a0;
- (unsigned long long)_existingIndexForCriticalNotificationRequest:(id)a0;
- (id)notificationViewController:(id)a0 keyboardAssertionForGestureWindow:(id)a1;
- (void)updateOrderedNotificationRequests:(id)a0;
- (id)_requestForListCell:(id)a0;
- (BOOL)_shouldAllowInteractionWithNotificationViewController:(id)a0;
- (void)notificationManagementContentProvider:(id)a0 requestsPresentingNotificationManagementViewType:(unsigned long long)a1 forNotificationRequest:(id)a2 withPresentingView:(id)a3;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (void)_reloadNotificationViewForNotificationRequest:(id)a0;
- (id)initWithSectionIdentifier:(id)a0 threadIdentifier:(id)a1;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)a0;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)a0;
- (id)defaultActionForNotificationListCell:(id)a0;
- (unsigned long long)indexOfNotificationRequestPassingTest:(id /* block */)a0;
- (BOOL)shouldAlignContentToBottomForNotificationViewController:(id)a0;
- (BOOL)shouldVerticallyStackActionButtonsForNotificationListCell:(id)a0;
- (BOOL)_allowPanningForRequest:(id)a0;
- (void)reloadLeadingNotificationRequestIfNecessary;
- (void)_reloadRecycledNotificationCellForRequest:(id)a0;
- (void)_scrollToTopIfNecessaryAndPerformBlock:(id /* block */)a0;
- (BOOL)isAttachmentImageFeaturedForNotificationViewController:(id)a0;
- (void)_executeViewActionForRequest:(id)a0;
- (id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)a0 viewController:(id)a1;
- (void)_executeOptionsActionForRequest:(id)a0 action:(id)a1;
- (void)_loadLeadingNotificationRequestCellIfNecessary;
- (BOOL)_shouldShowOpenActionToPerformDefaultActionForRequest:(id)a0;
- (BOOL)_isContentRevealedForNotificationRequest:(id)a0;
- (id)notificationViewController:(id)a0 auxiliaryOptionsContentProviderForNotificationRequest:(id)a1 withLongLook:(BOOL)a2;
- (void)_reloadRecycledGroupedNotificationCells;
- (void)_performAction:(id)a0 forNotificationRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)_presentLongLookActionForRequest:(id)a0 title:(id)a1 identifier:(id)a2;
- (BOOL)_shouldShowClearActionForRequest:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notificationViewController:(id)a0 finalFrameForDismissingLongLookFromView:(id)a1;

@end
