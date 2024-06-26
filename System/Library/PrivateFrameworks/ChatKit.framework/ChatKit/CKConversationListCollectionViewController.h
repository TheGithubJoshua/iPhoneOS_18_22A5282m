@class CKOnboardingController, NSDictionary, CKConversationListCellLayout, UIBarButtonItem, CKSearchViewController, NSString, CKCloudKitSyncProgressViewController, NSMutableSet, UICollectionViewDiffableDataSource, NSArray, CKReasonTrackingUpdater, UIButton, CKMacToolbarController, NSObject, UIView, _PSMessagesPinningSuggester, NSLayoutConstraint, CKConversationListCollectionViewLayout, CKMacToolbarItem, CKPinnedConversationCollectionViewCell, CNContact, UISearchController, CKConversation, TPKContentController, TPKContent, NSDate, CNContactStore, NSCache;
@protocol OS_os_log, CKConversationListCollectionViewControllerBannerProtocol, OS_dispatch_queue, CKConversationListControllerDelegate;

@interface CKConversationListCollectionViewController : UICollectionViewController <CKPinnedConversationViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, IMFocusStateManagerDelegate, CKFocusFilterBannerDelegate, UICollectionViewDelegate_Private, UISearchControllerDelegate, UISearchBarDelegate, UIScrollViewDelegate, CKReasonTrackingUpdaterDelegate, UICollectionViewDelegate, CKConversationListEmbeddedCollectionViewCellDelegate, CKConversationListCollectionViewCellDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CNContactViewControllerDelegate, CKContainerSearchControllerDelegate, TPKContentControllerDelegate, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate, CKConversationListControllerProtocol, CKPinnedConversationCollectionViewCellDelegate, CKMacToolbarItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *lastSelectedConversationItemIdentifier;
@property (retain, nonatomic) NSDate *lastUserSelectedConversationTime;
@property (retain, nonatomic) NSString *lastUserSelectedConversationItemIdentifier;
@property (retain, nonatomic) CKReasonTrackingUpdater *updater;
@property (retain, nonatomic) UIView *noMessagesDialogView;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) CNContact *meContact;
@property (nonatomic) BOOL holdPinningUpdatesForConversationDeletion;
@property (nonatomic) BOOL keyboardIsShowing;
@property (retain, nonatomic) CKSearchViewController *modernSearchResultsController;
@property (nonatomic) BOOL compositionWasSent;
@property (retain, nonatomic) UIButton *macVirtualComposeButton;
@property (retain, nonatomic) UIBarButtonItem *composeButtonItem;
@property (retain, nonatomic) UIBarButtonItem *editButtonItem;
@property (retain, nonatomic) UIBarButtonItem *editOscarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *optionsButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (retain, nonatomic) UIBarButtonItem *selectAllButtonItem;
@property (retain, nonatomic) UIBarButtonItem *moveSelectedToRecentlyDeletedButtonItem;
@property (retain, nonatomic) UIBarButtonItem *closeButtonItem;
@property (retain, nonatomic) UIBarButtonItem *catalystFiltersNavigationBackButton;
@property (retain, nonatomic) UIBarButtonItem *permanentDeleteSelectedButtonItem;
@property (retain, nonatomic) UIBarButtonItem *permanentDeleteAllButtonItem;
@property (retain, nonatomic) UIBarButtonItem *recoverSelectedButtonItem;
@property (retain, nonatomic) UIBarButtonItem *recoverAllButtonItem;
@property (retain, nonatomic) UIBarButtonItem *permanentDeleteSelectedJunkButtonItem;
@property (retain, nonatomic) UIBarButtonItem *permanentDeleteAllJunkButtonItem;
@property (retain, nonatomic) CKCloudKitSyncProgressViewController *syncProgressViewController;
@property (nonatomic) BOOL completedDeferredSetup;
@property (nonatomic) BOOL isInitialAppearance;
@property (nonatomic) BOOL willRotate;
@property (retain, nonatomic) CKConversation *conversationToUnpinPendingOrbDismissal;
@property (retain, nonatomic) CKConversation *conversationToPinPendingOrbDismissal;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CKOnboardingController *onboardingController;
@property (retain, nonatomic) _PSMessagesPinningSuggester *pinnedConversationSuggester;
@property (nonatomic) BOOL macShouldShowZKWSearch;
@property (nonatomic) BOOL isBelowMacSnapToMinWidth;
@property (weak, nonatomic) CKMacToolbarController *macToolbarController;
@property (retain, nonatomic) CKMacToolbarItem *composeToolbarItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tipKitQueue;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property (retain, nonatomic) CKConversationListCellLayout *standardCellLayout;
@property (retain, nonatomic) CKConversationListCellLayout *junkCellLayout;
@property (readonly, nonatomic) NSObject<OS_os_log> *conversationListCollectionViewControllerLogHandle;
@property (nonatomic) BOOL isShowingSwipeDeleteConfirmation;
@property (nonatomic) long long pinningInteractionMethod;
@property (nonatomic) BOOL isShowingPinningOnboarding;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic) BOOL shouldUseFastPreviewText;
@property (copy, nonatomic) NSArray *frozenPinnedConversations;
@property (copy, nonatomic) NSArray *frozenConversations;
@property (nonatomic) long long pinnedConversationViewLayoutStyle;
@property (nonatomic) BOOL haveAppliedInitialSnapshot;
@property (nonatomic) BOOL isApplyingSnapshot;
@property (nonatomic) BOOL isCommitingDiffableDataSourceTransaction;
@property (retain, nonatomic) NSDictionary *blockedSnapshotInfo;
@property (retain, nonatomic) NSMutableSet *itemIdentifiersForVisibleContextMenuInteractions;
@property (nonatomic) BOOL isCheckingIfPinningOnboardingNeeded;
@property (nonatomic) BOOL canShowSuggestedPinningOnboardingCell;
@property (nonatomic) BOOL isCurrentlyAnimatingPinningOnboardingSuggestions;
@property (retain, nonatomic) NSArray *recommendedPinningConversations;
@property (readonly, nonatomic) BOOL shouldShowTipKitContent;
@property (retain, nonatomic) TPKContentController *tipKitContentController;
@property (retain, nonatomic) TPKContent *tipKitContent;
@property (retain, nonatomic) NSCache *cacheForLastDisplayedActivitySnapshotByConversation;
@property (nonatomic, getter=isOscarModal) BOOL oscarModal;
@property (nonatomic, getter=isRecentlyDeletedModal) BOOL recentlyDeletedModal;
@property (nonatomic) BOOL holdPinningUpdatesForOnboardingAnimation;
@property (nonatomic) BOOL hasActivePinnedConversationDropSession;
@property (nonatomic) BOOL nextPinnedConversationListUpdateShouldTriggerUnanimatedSnapshotUpdate;
@property (nonatomic) BOOL isShowingPinnedChatDropTarget;
@property (retain, nonatomic) UIView<CKConversationListCollectionViewControllerBannerProtocol> *presentedBanner;
@property (retain, nonatomic) NSLayoutConstraint *bannerTopConstraint;
@property (nonatomic) double bannerHeight;
@property (nonatomic) unsigned long long editingMode;
@property (nonatomic) BOOL hidePinsForAnimation;
@property (retain, nonatomic) CKPinnedConversationCollectionViewCell *prototypePinnedConversationCollectionViewCell;
@property (retain, nonatomic) CKConversationListCollectionViewLayout *conversationLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *deferredSearchQuery;
@property (weak, nonatomic) id<CKConversationListControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isSearchActiveAndDisplayingResultsForSearchText;
@property (readonly, nonatomic) BOOL isSearchActive;
@property (nonatomic) unsigned long long filterMode;

+ (id)conversationListCollectionViewControllerLogHandle;

- (id)searchResultsController;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (id)collectionView:(id)a0 dropPreviewParametersForItemAtIndexPath:(id)a1;
- (id)init;
- (id)_multitaskingDragExclusionRects;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)willDismissSearchController:(id)a0;
- (id)activeConversations;
- (void)willPresentSearchController:(id)a0;
- (void)collectionView:(id)a0 dropSessionDidEnter:(id)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)focusStateDidChange;
- (void)loadView;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (void)collectionView:(id)a0 willDisplayContextMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)_dci_collectionView:(id)a0 contextMenuConfiguration:(id)a1 previewForHighlightingItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)_dci_collectionView:(id)a0 contextMenuConfiguration:(id)a1 previewForDismissingToItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 dragPreviewParametersForItemAtIndexPath:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_dci_collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 dropSessionDidEnd:(id)a1;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)_collectionView:(id)a0 sceneActivationConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)significantTimeChange;
- (void)_keyboardWillShow:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)doneButtonTapped:(id)a0;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)viewDidLoad;
- (void)contentController:(id)a0 contentViewNeedsLayout:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)reloadData;
- (void)applicationWillSuspend;
- (void).cxx_destruct;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)collectionView:(id)a0 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewLayoutMarginsDidChange;
- (id)_contactStore;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (BOOL)collectionView:(id)a0 canHandleDropSession:(id)a1;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (id)toolbarItems;
- (void)viewWillAppear:(BOOL)a0;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)preferredFocusEnvironments;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)_userDefaults;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)collectionView:(id)a0 didBeginMultipleSelectionInteractionAtIndexPath:(id)a1;
- (BOOL)_hidesBackButton;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_updateInsets;
- (void)completeAnimation;
- (void)contentController:(id)a0 actionTapped:(id)a1;
- (id)_meContact;
- (void)sharingSettingsViewController:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateSharingState:(BOOL)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateWithSharingResult:(id)a1;
- (void)sharingSettingsViewControllerDidUpdateContact:(id)a0;
- (void)updateNavigationItems;
- (void)_updateToolbarItems;
- (id)_deleteSwipeActionForIndexPath:(id)a0;
- (void)_dismissPresentedNavController:(id)a0;
- (id)_indexPathOfDefaultConversation;
- (BOOL)_messageUnknownFilteringEnabled;
- (id)dragOrDropPreviewParametersForItemAtIndexPath:(id)a0 inCollectionView:(id)a1;
- (void)stopTipCellAnimatingIfNecessary;
- (id)_defaultEmptyStateConfiguration;
- (void)_filterControlSelectionChanged:(id)a0;
- (void)_reloadVisibleConversationList:(id)a0;
- (void)_updateSelectAllButtonItemTitle;
- (void)compositionSent;
- (void)configureWithToolbarController:(id)a0;
- (void)pinConversationsWithCompletion:(id /* block */)a0;
- (void)updateConversationSelectionPreservingLastSelectedItemIdentifier;
- (long long)_activityItemOriginationDirectionForItemIdentifier:(id)a0 conversation:(id)a1;
- (double)_activityItemTopInsetForIndexPath:(id)a0;
- (long long)_alertControllerStyle;
- (long long)_alertControllerStyleForCollapsedState:(BOOL)a0;
- (id)_allFrozenConversations;
- (void)_appendRecentlyDeletedIdentifersToSnapshot:(id)a0;
- (id)_avatarProviderFromNickname:(id)a0;
- (void)_beginAccountRepairIfNeeded;
- (BOOL)_canShowCatalystFiltersNavigation;
- (void)_cancelDeletion:(id /* block */)a0;
- (void)_chatAllowedByScreenTimeChanged:(id)a0;
- (void)_chatItemsDidChange:(id)a0;
- (void)_chatParticipantsChangedNotification:(id)a0;
- (void)_chatUnreadCountDidChange:(id)a0;
- (void)_chatWatermarkDidChange:(id)a0;
- (void)_ck_setNeedsUpdateOfMultitaskingDragExclusionRects;
- (void)_configureAvatarViewInConversationCell:(id)a0 forItemIdentifier:(id)a1;
- (void)_configureCatalystFiltersNavigation;
- (void)_configureForFilterMode:(unsigned long long)a0;
- (void)_configureInteractiveAvatarInConversationCell:(id)a0 forItemIdentifier:(id)a1;
- (void)_configureNavbarButtonsForNavigationItem:(id)a0;
- (void)_configurePinnedConversationCell:(id)a0 forConversation:(id)a1 itemIdentifier:(id)a2 indexPath:(id)a3 animated:(BOOL)a4;
- (void)_configureSecondarySubMenuInParentMenuItems:(id)a0;
- (void)_contactStoreDidFinishLoadingNotification:(id)a0;
- (id)_conversationActionMenusForItemIdentifier:(id)a0 inSection:(unsigned long long)a1 withCell:(id)a2;
- (id)_conversationAfterDropDestination:(id)a0 fromDiffableDataSource:(id)a1 snapshot:(id)a2 excludingDraggedConversation:(id)a3;
- (void)_conversationContactPhotosEnabledChangedNotification:(id)a0;
- (id)_conversationDetailsActionForItemIdentifier:(id)a0 withCell:(id)a1;
- (void)_conversationDisplayNameChangedNotification:(id)a0;
- (id)_conversationDropProposalForCollectionView:(id)a0 dropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (void)_conversationFilteringStateChangedNotification:(id)a0;
- (id)_conversationFromDragItem:(id)a0;
- (BOOL)_conversationHasActivityItem:(id)a0;
- (void)_conversationIsFilteredChangedNotification:(id)a0;
- (void)_conversationListDidChange:(id)a0;
- (void)_conversationListDidFinishLoadingConversations:(id)a0;
- (void)_conversationListPinnedConversationsDidChange:(id)a0;
- (void)_conversationMessageWasSent:(id)a0;
- (void)_conversationMuteDidChangeNotification:(id)a0;
- (void)_conversationSpamFilteringStateChangedNotification:(id)a0;
- (id)_conversationsEligibleForMute:(id)a0;
- (id)_conversationsEligibleForReadStateToggle:(id)a0;
- (id)_conversationsFromLocalDropSession:(id)a0;
- (id)_conversationsInRowOfItemIdentifier:(id)a0;
- (id)_deleteActionForSelectedConversations:(id)a0;
- (id)_deleteConversationActionForItemIdentifier:(id)a0 withCell:(id)a1;
- (void)_deselectSelectedIndexPathsInCollectionView:(id)a0 animated:(BOOL)a1;
- (unsigned long long)_destinationSectionForDropSession:(id)a0 destinationIndexPath:(id)a1;
- (id)_dndSwipeActionForIndexPath:(id)a0;
- (void)_downtimeStateChanged:(id)a0;
- (id)_dragItemsForConversation:(id)a0 indexPath:(id)a1 inCollectionView:(id)a2;
- (void)_endHoldingUpdatesForBatchEditing:(BOOL)a0;
- (void)_endHoldingUpdatesOnViewWillAppear;
- (void)_ensureCellLayoutOnCell:(id)a0;
- (long long)_feedbackPinningInteractionMethod;
- (BOOL)_focusFilterBannerShouldUseFullWidthKeylines;
- (void)_freezeConversations;
- (id)_getTitleForCurrentFilterMode;
- (void)_handingPendingConversationDidChange:(id)a0;
- (void)_handleAccountRegistrationChange:(id)a0;
- (void)_handleChatRegistryDidPermanentlyDeleteRecoverableMessages:(id)a0;
- (void)_handleDidRecoverMessagesInChatsNotification:(id)a0;
- (void)_handleMovedMessagesInChatsWithGUIDsToRecentlyDeletedNotification:(id)a0;
- (void)_handleSIMSubscriptionUpdate;
- (BOOL)_hasAlertsEnabledForAllConversations:(id)a0;
- (BOOL)_hasReadAllConversations:(id)a0;
- (BOOL)_hasStewieConversationSelected;
- (BOOL)_hasUnreadConversation;
- (BOOL)_imageForkedFromMeCard;
- (void)_increaseContrastDidChange:(id)a0;
- (id)_indexPaths:(id)a0 containingHandleWithUID:(id)a1;
- (void)_infiniteScrollReachedIndexPath:(id)a0;
- (void)_iosUpdateNavbarLayoutIfNeeded;
- (BOOL)_isDropForSession:(id)a0 toLeadingEdgeOfView:(id)a1;
- (BOOL)_isNewComposeSelected;
- (BOOL)_isOnlyActivityItemInRowForConversation:(id)a0 itemIdentifier:(id)a1;
- (BOOL)_isRunningPPT;
- (id)_itemIdentifierOfDefaultConversation;
- (id)_lastDisplayedActivitySnapshotCacheKeyForConversation:(id)a0;
- (void)_macosUpdateNavbarLayoutIfNeeded;
- (id)_markAsActionForConversations:(id)a0;
- (id)_markUnreadSwipeActionForIndexPath:(id)a0;
- (unsigned long long)_maxNumberOfDaysUntilDeletionInConversations:(id)a0;
- (unsigned long long)_meCardSharingAudience;
- (BOOL)_meCardSharingEnabled;
- (id)_meCardSharingNameProviderWithContact:(id)a0;
- (id)_meCardSharingState;
- (BOOL)_messageSpamFilteringEnabled;
- (unsigned long long)_minNumberOfDaysUntilDeletionInConversations:(id)a0;
- (void)_moveToRecentlyDeletedButtonTapped:(id)a0;
- (void)_multiWayCallStateChanged:(id)a0;
- (id)_muteActionConversations:(id)a0;
- (unsigned long long)_numberOfRecoverableMessagesInConversations:(id)a0;
- (unsigned long long)_numberOfSelectedConversations;
- (id)_openConversationInNewWindowActionForItemIdentifier:(id)a0;
- (void)_performConversationDropWithCollectionView:(id)a0 dropCoordinator:(id)a1;
- (void)_performItemDropWithCollectionView:(id)a0 dropCoordinator:(id)a1;
- (void)_performMultiSelectCleanUp;
- (void)_performRecentlyDeletedMultiSelectCleanUp;
- (void)_performRecoverableDeletionForConversations:(id)a0 deleteDate:(id)a1;
- (void)_performTranscriptPushForItemAtIndexPath:(id)a0 userInitiated:(BOOL)a1;
- (void)_permanentDeleteAllButtonTapped:(id)a0;
- (void)_permanentDeleteAllJunkButtonTapped:(id)a0;
- (id)_permanentDeleteJunkAction:(id)a0;
- (id)_permanentDeleteRecentlyDeletedAction:(id)a0;
- (void)_permanentDeleteSelectedButtonTapped:(id)a0;
- (void)_permanentDeleteSelectedConversations;
- (void)_permanentDeleteSelectedJunkButtonTapped:(id)a0;
- (id)_permanentDeletebuttonToUseForSelectedConversations:(BOOL)a0;
- (id)_permanentDeletebuttonToUseForSelectedJunkConversations:(BOOL)a0;
- (void)_permanentDeletionConfirmedForConversations:(id)a0;
- (id)_pinActionForItemIdentifier:(id)a0;
- (id)_pinnedConversationShortNames;
- (id)_pinningSuggestionsForConversations:(id)a0;
- (void)_popToInbox;
- (unsigned long long)_preferredEditingMode:(unsigned long long)a0;
- (void)_presentPermanentDeletionConfirmationsForConversations:(id)a0;
- (void)_presentRecoverConfirmationsForConversations:(id)a0;
- (id)_previewForHighlightingOrDismissingContextMenuWithConfiguration:(id)a0 collectionView:(id)a1;
- (id /* block */)_previewProviderForConversation:(id)a0;
- (id)_recentMessagesInPinnedConversations;
- (id)_recentlyDeletedDisclosureLabelText;
- (void)_recoverAllButtonTapped:(id)a0;
- (id)_recoverButtonToUseForSelectedConversations:(BOOL)a0;
- (void)_recoverConfirmedForConversations:(id)a0;
- (id)_recoverRecentlyDeletedAction:(id)a0;
- (void)_recoverSelectedButtonTapped:(id)a0;
- (void)_recoverSelectedConversations;
- (void)_refreshConversationListCellForGroupPhotoUpdate:(id)a0;
- (void)_removalCompleted;
- (void)_removeConversationsFromFrozenConversations:(id)a0;
- (id)_removeFromJunkAction:(id)a0;
- (void)_resetMessageFiltering;
- (void)_resetSimFilteringToDefaultState;
- (unsigned long long)_sanitizedFilterMode:(unsigned long long)a0;
- (unsigned long long)_sanitizedFilterModeForFilterUnknownDisabled:(unsigned long long)a0;
- (unsigned long long)_sanitizedFilterModeForFilterUnknownEnabled:(unsigned long long)a0;
- (id)_secondaryTextForFilterMode:(unsigned long long)a0;
- (void)_selectConversationAtIndexPath:(id)a0 animated:(BOOL)a1;
- (id)_selectedConversationsInRecentlyDeletedSection;
- (void)_setPinnedConversationViewLayoutStyle:(long long)a0 shouldInvalidateLayout:(BOOL)a1;
- (BOOL)_shouldAllowLargeTitles;
- (BOOL)_shouldAnimatePinningChangesForUpdateFollowingHoldForReason:(id)a0;
- (BOOL)_shouldKeepSelection;
- (BOOL)_shouldResizeNavigationBar;
- (BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
- (BOOL)_shouldSelectConversationAfterDeletingIndexPath:(id)a0;
- (BOOL)_shouldShowInboxView;
- (BOOL)_shouldShowToolbar;
- (BOOL)_shouldUsePreviewProviderForDragItemAtIndexPath:(id)a0;
- (void)_showConversationWithComposition:(id)a0 atIndexPath:(id)a1;
- (void)_showOscarModalActionTapped;
- (void)_showRecentlyDeletedModalActionTapped;
- (id)_simFilterActionsForActiveSubscriptions;
- (id)_simFilterSubMenu;
- (id)_snapshotOfAvatarViewForConversation:(id)a0;
- (void)_submitFeedbackIfNecessaryForPinsChangedWithPreviousPinnedConversationIdentifiers:(id)a0;
- (void)_submitFeedbackIfNecessaryForSuggestedPinnedConversationsFollowingOnboardingCompletedSuccessfully:(BOOL)a0;
- (id)_topLevelMenuForItemIdentifier:(id)a0 inSection:(unsigned long long)a1 withCell:(id)a2;
- (id)_topLevelMenuForMultipleSelectedConversations:(id)a0;
- (void)_unfreezeConversations;
- (BOOL)_updateAddsTypingChatItem:(id)a0;
- (void)_updateBannerLayoutConstraints;
- (void)_updateCollectionViewImmediatelyIfNeeded;
- (void)_updateCollectionViewOffsetAddingBannerViewHeight:(double)a0;
- (void)_updateCollectionViewOffsetRemovingBannerViewHeight:(double)a0;
- (void)_updateConversationFilteredFlagsAndReportSpam;
- (void)_updateConversationListsAndSortIfEnabled;
- (void)_updateConversations:(id)a0 alertsHidden:(BOOL)a1;
- (void)_updateConversations:(id)a0 asRead:(BOOL)a1;
- (void)_updateForCurrentEditingStateAnimated:(BOOL)a0;
- (void)_updateLargeTitleDisplayModeWithAnimation:(BOOL)a0;
- (void)_updateNavbarLayoutIfNeeded;
- (BOOL)_updateRemovesTypingChatItem:(id)a0;
- (void)_updateScrollEdgeAppearanceProgress;
- (void)_updateSearchControllerForConversationListBelowMacSnapWidth:(BOOL)a0;
- (void)_updateSyncProgressIfNeededWithProgressController:(id)a0 forceShow:(BOOL)a1;
- (void)_updatedSelectedIndexPathCount;
- (BOOL)_wantsThreeColumnLayout;
- (void)addBanner:(id)a0 animated:(BOOL)a1;
- (id)alertTitleForDelete;
- (id)alertTitleForDeleteMultiple;
- (void)animateInCollectionView:(id)a0 aboveBackgroundSnapshotView:(id)a1 enteringOnboarding:(BOOL)a2 animationDistance:(double)a3;
- (void)animateInPinsToFinalPosition;
- (void)animateOutBackgroundSnapshotView:(id)a0;
- (double)animationDistanceForCompletingOnboarding;
- (void)applyConversationListSnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)avatarHeaderWasTappedForConversation:(id)a0;
- (void)avatarViewTapped:(id)a0;
- (void)backButtonPressed;
- (void)batchDeleteButtonTapped:(id)a0;
- (void)beginHoldingConversationListUpdatesForPPTTests;
- (void)cancelButtonTapped:(id)a0;
- (void)catalystFiltersNavigationBackButtonTapped:(id)a0;
- (BOOL)cellAtIndexPath:(id)a0 isVisibleInCollectionView:(id)a1;
- (id)cellForCollapsedSidebarFocusFilterCellInCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)cellForFocusFilterInCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)cellForIndexPath:(id)a0 inCollectionView:(id)a1 withItemIdentifier:(id)a2;
- (id)cellForPinnedConversationDropTargetInCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)cellForPinnedConversationWithItemIdentifier:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellForPinningOnboardingTitleViewCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)cellForRecoverableConversationWithItemIdentifier:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellForStandardConversationWithItemIdentifier:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellPinningOnboardingItemIdentifier:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;
- (void)cloudKitSyncProgressViewController:(id)a0 actionButtonWasPressed:(long long)a1 errors:(id)a2;
- (void)commitPinnedConversationsForEditingPins;
- (void)commitPinnedConversationsFromSnapshot:(id)a0;
- (id)complimentaryIndexPathForConversationAtIndexPath:(id)a0;
- (void)composeButtonClicked:(id)a0;
- (void)configureConversationCell:(id)a0 forItemIdentifier:(id)a1;
- (void)configureDropTargetCell:(id)a0;
- (void)configureFocusFilterCell:(id)a0;
- (void)configureFocusFilterCollapsedCell:(id)a0;
- (void)configureForOscarFilter;
- (void)configureForRecentlyDeletedFilter;
- (void)configureNewMessageCell:(id)a0;
- (void)configureOnboardingTitleCell:(id)a0;
- (void)configurePinnedConversationCell:(id)a0 forItemIdentifier:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (void)configureRecoverableConversationCell:(id)a0 forItemIdentifier:(id)a1;
- (void)configureSearchBarEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)configureSelectionBarButtonItem:(id)a0 usingStyle:(unsigned long long)a1;
- (void)configureTipKitCell:(id)a0;
- (void)configureTipKitOnboardingCell:(id)a0;
- (BOOL)contextMenuInteractionShouldBeginAtIndexPath:(id)a0;
- (id)conversationAtIndexPath:(id)a0;
- (id)conversationForItemIdentifier:(id)a0;
- (id)conversationList;
- (void)conversationWillBeMarkedRead:(id)a0;
- (id)conversationsAtIndexPaths:(id)a0;
- (id)conversationsForItemIdentifiers:(id)a0;
- (id)dataSourceWithCollectionView:(id)a0;
- (void)deleteButtonTappedForItemIdentifier:(id)a0 completionHandler:(id /* block */)a1 cellToUpdate:(id)a2;
- (void)deleteSelectedConversation;
- (id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)a0;
- (void)detailsControllerDidDismiss:(id)a0;
- (id)detailsNavigationControllerConversation:(id)a0;
- (void)didReorderConversationsWithTransaction:(id)a0;
- (void)dismissCatalystSearch;
- (void)dismissDetailsNavigationController;
- (long long)distanceBetweenConversationIndexPath:(id)a0 andIndexPath:(id)a1;
- (id)dragPreviewViewForPinnedConversation:(id)a0 inCollectionView:(id)a1;
- (id)editButtonDropdownMenu;
- (void)editButtonMenuWillShow;
- (void)editNameAndPhotoMenuItemSelected;
- (void)endHoldingConversationListUpdatesForPPTTests;
- (void)escButtonPressed:(id)a0;
- (void)fetchPinningSuggestions;
- (id)firstVisibleIndexPathInCollectionView;
- (void)focusFilterBannerEnabledStateDidChange:(BOOL)a0;
- (id)generateSnapshot;
- (BOOL)hasDetailsNavigationController;
- (id)indexPathOfFirstSelectedItem;
- (id)initForOscarModal;
- (id)initForRecentlyDeletedModal;
- (void)invalidateCellLayout;
- (BOOL)isDetailsNavigationControllerDetached;
- (BOOL)isShowingConversationFromCatalystOpenURL;
- (id)itemIdentifierForConversation:(id)a0 inSection:(unsigned long long)a1;
- (BOOL)itemIdentifierIsFromPinnedSection:(id)a0;
- (id)itemIdentifiersForConversations:(id)a0 inSection:(unsigned long long)a1;
- (BOOL)itemProviderDisablesTouches;
- (id)junkConversationMenu:(id)a0;
- (id)lastVisibleIndexPathInCollectionView;
- (id)leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)leaveJunkFilterIfNeeded;
- (void)muteConversationButtonTappedForConversationWithItemIdentifier:(id)a0 setMuted:(BOOL)a1;
- (id)newMessageCellInCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)nextSequentialIndexPathForIndexPath:(id)a0 descending:(BOOL)a1;
- (id)nicknameController;
- (void)noteUnreadCountsChanged;
- (long long)numberOfConversations;
- (long long)numberOfPinnedConversations;
- (void)onboardingControllerDidFinish:(id)a0;
- (void)oscarViewWillAppear:(BOOL)a0;
- (void)performDeletionForActiveConversation:(id)a0 itemIdentifier:(id)a1 completionHandler:(id /* block */)a2 cellToUpdate:(id)a3;
- (void)performDeletionForPendingConversationCell:(id)a0 completionHandler:(id /* block */)a1;
- (void)performResumeDeferredSetup;
- (void)performSearch:(id)a0 completion:(id /* block */)a1;
- (void)pinButtonTappedForCell:(id)a0;
- (void)pinConversation:(id)a0 withReason:(id)a1;
- (id)pinnedConversationIdentifiers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinnedConversationMultitaskingDragExclusionRect;
- (void)pinnedConversationView:(id)a0 didUpdateWithActivitySnapshot:(id)a1;
- (id)pinnedConversations;
- (id)pinnedConversationsFromSnapshot:(id)a0;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)presentDetailsForItemIdentifier:(id)a0 fromView:(id)a1;
- (void)presentJunkConversationRecoveryConfirmation:(id)a0;
- (void)presentPermanentJunkConversationDeletionConfirmation:(id)a0;
- (void)presentPermanentJunkConversationDeletionConfirmation:(id)a0 alertsCompletedBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)presentRecoverableDeleteConfirmationsWithConversations:(id)a0 collapsedAppearance:(BOOL)a1 alertsCompletedBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)presentingViewControllerForOnboardingController:(id)a0;
- (id)previousPinnedConversationActivitySnapshotForConversation:(id)a0;
- (void)providerWillBeRemovedFromToolbarController:(id)a0;
- (void)reasonTrackingUpdater:(id)a0 didBeginHoldingUpdatesWithInitialReason:(id)a1;
- (void)reasonTrackingUpdater:(id)a0 didEndHoldingUpdatesWithFinalReason:(id)a1;
- (void)reasonTrackingUpdater:(id)a0 needsUpdateForReasons:(id)a1 followingHoldForReason:(id)a2;
- (id)recentlyDeletedConversationMenu:(id)a0;
- (void)recentlyDeletedViewWillAppear:(BOOL)a0;
- (void)recoverableDeleteSelectedConversations;
- (void)registerForCloudKitEventsImmediately;
- (void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)a0;
- (void)registerForFocusStateChanges;
- (void)removeBanner:(id)a0 animated:(BOOL)a1;
- (void)removeNewlyPinnedSuggestionCells:(id)a0;
- (void)removePendingConversationCell;
- (void)scrollToFirstSelectedItemIfNecessary;
- (id)searchBarForSearchViewController:(id)a0;
- (id)searchController:(id)a0 conversationForChatGUID:(id)a1;
- (void)searchController:(id)a0 didSelectItem:(id)a1 inChat:(id)a2;
- (void)searchControllerDidBeginDragging:(id)a0;
- (void)searchViewController:(id)a0 requestsPushOfSearchController:(id)a1;
- (BOOL)sectionHasActionableConversations:(unsigned long long)a0;
- (BOOL)sectionHasSelectableConversations:(unsigned long long)a0;
- (void)selectAllButtonTapped:(id)a0;
- (void)selectConversationClosestToDeletedIndex:(id)a0;
- (void)selectDefaultConversationAnimated:(BOOL)a0;
- (void)selectDefaultConversationAnimated:(BOOL)a0 removingPendingConversationCell:(BOOL)a1;
- (void)selectDefaultConversationAnimated:(BOOL)a0 shouldUsePreviousySelectedIndexPath:(BOOL)a1;
- (void)selectFirstActiveConversation;
- (void)selectNextSequentialConversation:(BOOL)a0;
- (void)selectPinnedConversationForItem:(long long)a0;
- (id)selectedConversations;
- (void)selectedDeleteButtonForConversation:(id)a0 inCell:(id)a1;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setEditingMode:(unsigned long long)a0 animated:(BOOL)a1 shouldUpdate:(BOOL)a2;
- (void)setNeedsConversationListUpdateForFocusStateChange;
- (BOOL)shouldAnimatePositionForRecommendedItemIdentifiers:(id)a0 pinnedItemIdentifiers:(id)a1;
- (BOOL)shouldInsetResultsForSearchController:(id)a0;
- (BOOL)shouldScrollCollectionViewForCellSelection:(id)a0;
- (BOOL)shouldShowPendingCell;
- (BOOL)shouldShowPinnedConversations;
- (void)showAccountMismatachAlertForNicknames;
- (void)showCannotPinMoreConversationsAlert;
- (void)showMeCardViewController;
- (void)showMeCardViewControllerWithNickname:(id)a0;
- (void)showMultiplePhoneNumbersAlertForNicknames;
- (id)showOscarModalAction;
- (void)showPinningOnboardingTapped;
- (id)showRecentlyDeletedModalAction;
- (void)startCompletePinningOnboardingAnimation;
- (void)startEndSuggestedPinsAnimation;
- (void)startSuggestedPinsAnimation;
- (void)startTipCellAnimatingIfNecessary;
- (id)supplementaryViewForIndexPath:(id)a0 inCollectionView:(id)a1 withKind:(id)a2;
- (id)tipKitCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)tipKitOnboardingCollectionView:(id)a0 atIndexPath:(id)a1;
- (void)togglePinStateForConversation:(id)a0 withReason:(id)a1;
- (id)toggleReadButtonItem;
- (void)toggleReadButtonTapped:(id)a0;
- (id)toolbarItemForIdentifier:(id)a0;
- (id)toolbarItemsForJunkFilterHasConversations:(BOOL)a0 hasSelectedConversations:(BOOL)a1;
- (id)toolbarItemsForRecentlyDeletedFilterHasConversations:(BOOL)a0 hasSelectedConversations:(BOOL)a1;
- (void)trackSIMFilterUpdateEventFromOldSIMFilterIndex:(long long)a0 toSelectedSIMFilterIndex:(long long)a1;
- (id)trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)transparentNavBarAppearance;
- (void)unpinButtonTappedForCell:(id)a0 withConversation:(id)a1;
- (void)unpinConversation:(id)a0 withReason:(id)a1;
- (void)unregisterForCloudKitEvents;
- (void)updateBackButton;
- (void)updateBannerConstraintsForScrollViewDidScroll:(id)a0;
- (void)updateBannerVisualEffectGroup;
- (void)updateConfigurationStateForSelectedCell;
- (void)updateContentsOfAllCellsAnimated:(BOOL)a0;
- (void)updateContentsOfCell:(id)a0 withItemIdentifier:(id)a1 atIndexPath:(id)a2 animated:(BOOL)a3;
- (void)updateContentsOfCellForConversation:(id)a0 animated:(BOOL)a1;
- (void)updateContentsOfCellWithIndexPath:(id)a0 animated:(BOOL)a1;
- (void)updateContentsOfCellWithItemIdentifier:(id)a0 animated:(BOOL)a1;
- (void)updateContentsOfCellWithItemIdentifier:(id)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (void)updateContentsOfCellsWithItemIdentifiers:(id)a0 animated:(BOOL)a1;
- (void)updateContentsOfTipCellForCustomizationType:(long long)a0;
- (void)updateConversationList;
- (void)updateConversationListForMessageSentToConversation:(id)a0;
- (void)updateConversationNamesForNicknames:(id)a0;
- (void)updateConversationSelection;
- (void)updateFocusFilterBannerWithAnimation:(BOOL)a0;
- (void)updateManualScrollEdgeProgress;
- (void)updateNoMessagesDialog;
- (void)updateSIMFilterIndexAndReloadData:(long long)a0;
- (void)updateSMSSpamConversationsDisplayName;
- (void)updateSnapshotAnimatingDifferences:(BOOL)a0;
- (void)updateSnapshotAnimatingDifferences:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateSyncProgressIfNeeded;
- (void)userDeletedJunkConversationFromTranscript;
- (void)userRecoveredJunkConversationFromTranscript;
- (void)viewDidAppearDeferredSetup;
- (double)virtualToolbarPreferredHeight;
- (double)widthForDeterminingAvatarVisibility;
- (double)yCoordinateForBorderBetweenPinnedAndActiveSectionExcludingConversations:(id)a0;

@end
