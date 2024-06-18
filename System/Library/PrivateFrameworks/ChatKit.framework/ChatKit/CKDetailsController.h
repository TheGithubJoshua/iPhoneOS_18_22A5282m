@class UIVisualEffectView, CKDetailsGroupNameCell, CKConversation, CKDetailsMapViewCell, CKGroupRecipientSelectionController, CKDetailsDownloadAttachmentsHeaderFooterView, CKBusinessInfoView, NSString, CKDetailsLocationShareCell, CKEntity, UITextView, NSTimer, CKDetailsSearchViewController, NSArray, CKDetailsSIMCell, CKGroupPhotoCell, UIButton, CNGroupIdentityHeaderViewController, CKNavigationController, NSData, CKDetailsLocationStringCell, CKDetailsAddGroupNameView, FMFMapViewController, CKDetailsCell, CKDetailsContactsManager, CNContactStore, CKDetailsTableView, NSNumber, CKTranscriptDetailsResizableCell;
@protocol CKDetailsControllerDelegate;

@interface CKDetailsController : CKScrollViewController <FMFMapViewControllerDelegate, UIViewControllerPreviewingDelegate, CKDetailsAddGroupNameViewDelegate, UITextViewDelegate, CKDetailsContactsManagerDelegate, CNAvatarViewDelegate, CKDetailsContactsTableViewCellDelegate, CKBusinessInfoViewDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, CKDetailsSearchControllerDelegate, UIImagePickerControllerDelegate, CNGroupIdentityHeaderViewControllerDelegate, CNVisualIdentityPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CKDetailsTableView *tableView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) CKDetailsGroupNameCell *groupNameCell;
@property (retain, nonatomic) CKGroupPhotoCell *groupPhotoCell;
@property (nonatomic) double showMoreContactCellHeight;
@property (nonatomic) double addContactCellHeight;
@property (nonatomic) double groupPhotoHeaderHeight;
@property (nonatomic) double simLabelCellHeight;
@property (nonatomic) double tuConversationCellHeight;
@property (retain, nonatomic) NSData *selectedImageData;
@property (retain, nonatomic) CKDetailsAddGroupNameView *groupNameView;
@property (retain, nonatomic) CKDetailsMapViewCell *mapViewCell;
@property (retain, nonatomic) CKDetailsSIMCell *simCell;
@property (retain, nonatomic) CKDetailsLocationShareCell *locationShareCell;
@property (retain, nonatomic) CKDetailsLocationStringCell *locationStringCell;
@property (retain, nonatomic) CKDetailsSIMCell *simSwitchCell;
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *locationSendCell;
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *locationStartShareCell;
@property (retain, nonatomic) CKTranscriptDetailsResizableCell *openInContactsCell;
@property (retain, nonatomic) CKDetailsCell *changeGroupNamePhotoCell;
@property (retain, nonatomic) CKDetailsSearchViewController *searchViewController;
@property (retain, nonatomic) CNGroupIdentityHeaderViewController *groupPhotoHeaderViewController;
@property (retain, nonatomic) CKNavigationController *groupNavigationController;
@property (retain, nonatomic) UIButton *screenShareContextButton;
@property (retain, nonatomic) CKGroupRecipientSelectionController *addRecipientsController;
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager;
@property (nonatomic) BOOL fmfEnabled;
@property (nonatomic) BOOL fmfRestricted;
@property (retain, nonatomic) FMFMapViewController *mapViewController;
@property (retain, nonatomic) UITextView *locationSharingTextView;
@property (retain, nonatomic) CKDetailsDownloadAttachmentsHeaderFooterView *downloadAttachmentsFooterView;
@property (retain, nonatomic) UITextView *expanseActivityTextView;
@property (retain, nonatomic) UITextView *sharedWithYouFooterTextView;
@property (retain, nonatomic) CKBusinessInfoView *businessInfoView;
@property (retain, nonatomic) NSTimer *fmfUpdateTimer;
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore;
@property (retain, nonatomic) CKEntity *presentedEntity;
@property (nonatomic) BOOL isContactsSectionCollapsed;
@property (nonatomic) BOOL shouldCollapseContactsSection;
@property (nonatomic) double contentOffsetYShiftAfterKeyboardNotification;
@property (retain, nonatomic) id selfWeakWrapper;
@property (readonly, nonatomic) BOOL shouldShowDownloadMoreCell;
@property (nonatomic) BOOL didPerformPurgedAttachmentsCheck;
@property (nonatomic) unsigned long long undownloadedPhotoAttachmentCount;
@property (nonatomic) unsigned long long downloadButtonState;
@property (nonatomic) BOOL isDisplayingPhotos;
@property (nonatomic) BOOL needsContactsReload;
@property (retain, nonatomic) NSNumber *isSharingFocusStatus;
@property (retain, nonatomic) NSNumber *canShareFocusStatus;
@property (retain, nonatomic) NSArray *actions;
@property (weak, nonatomic) id<CKDetailsControllerDelegate> detailsControllerDelegate;
@property (retain, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveGroupPhotoDataAndUpdateParticipants:(id)a0 forConversation:(id)a1;
+ (void)updateParticipantsWithGroupPhotoAtPath:(id)a0 forConversation:(id)a1;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)inputAccessoryViewController;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)_handleKeyboardWillHideNotification:(id)a0;
- (id)contentScrollView;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (struct CGSize { double x0; double x1; })screenSize;
- (void)scrollViewDidScroll:(id)a0;
- (void)_handleKeyboardWillShowNotification:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (id)keyCommands;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)indexPathForCell:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;
- (void)headerViewControllerDidTapActionButton:(id)a0;
- (void)shareLocationAction;
- (void)visualIdentityPicker:(id)a0 didUpdatePhotoForVisualIdentity:(id)a1 withContactImage:(id)a2;
- (void)visualIdentityPicker:(id)a0 presentationControllerWillDismiss:(id)a1;
- (void)visualIdentityPickerDidCancel:(id)a0;
- (BOOL)isGroupChat;
- (BOOL)_canRemoveRecipientAtIndexPath:(id)a0;
- (void)_handleGroupDisplayNameChanged:(id)a0;
- (void)_presentGroupNameAndPhotoEditor;
- (void)autoDonationSwitchValueChanged:(id)a0;
- (void)contactsCell:(id)a0 didHoverWithState:(long long)a1;
- (void)readReceiptsSwitchValueChanged:(id)a0;
- (id)simSwitcherMenu;
- (void)presentFullFMFMapViewController;
- (BOOL)shouldShowEnhancedGroupFeatures;
- (BOOL)shouldShowSharedWithYouFeatures;
- (id)tuConversationCellForIndexPath:(id)a0;
- (BOOL)_allRecipientsAlreadyFollowingLocation;
- (void)_batchDownloadNotificationFired:(id)a0;
- (BOOL)_canLeaveConversation;
- (void)_chatAllowedByScreenTimeChanged:(id)a0;
- (void)_chatAutoDonatingHandleUpdateNotification:(id)a0;
- (void)_chatParticipantsChangedNotification:(id)a0;
- (void)_configureSeparatorForContactCell:(id)a0 indexPath:(id)a1;
- (void)_configureSeparatorForOptionCell:(id)a0 indexPath:(id)a1;
- (void)_conversationListFinishedMerging:(id)a0;
- (id)_conversationOfferTimeExpiration;
- (unsigned long long)_countOfContactViewModels;
- (void)_determineFocusStatusSharingState;
- (void)_dismissIdentityPicker:(id)a0;
- (BOOL)_fmfExpirationDateIsValid;
- (id)_groupPhotoHeaderRequiredContactKeys;
- (void)_handleAddressBookChanged:(id)a0;
- (void)_handleGroupPhotoChanged:(id)a0;
- (void)_handleLocationChanged:(id)a0;
- (void)_handleMultiWayStateChange:(id)a0;
- (double)_heightForAuxContactCellAtIndexPath:(id)a0;
- (double)_heightForContactCellAtIndexPath:(id)a0;
- (double)_heightForExpanseActivityCell;
- (void)_hideAllContactCellButtons;
- (void)_lastAddressedHandleUpdateNotification:(id)a0;
- (id)_menuConfigForContactsCell:(id)a0;
- (BOOL)_moreThanMinNumberOfParticipantsInGroup;
- (void)_presentRemoveRecipientSheetForHandle:(id)a0 fromView:(id)a1;
- (unsigned long long)_purgedAttachmentCount;
- (void)_resetPurgedAttachmentCount;
- (void)_showBrandCard;
- (void)_showContactCardForEntity:(id)a0 fromView:(id)a1;
- (id)_tableViewCellForSendLocation;
- (id)_tableViewCellForSharingLocation:(BOOL)a0;
- (void)_toggleSharingStateFromABCard;
- (void)_updateDownloadButtonStateIfNeeded;
- (void)_updateDownloadFooterView;
- (void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
- (long long)adjustedViewModelIndexForIndexPath:(id)a0;
- (id)annotationContactForHandle:(id)a0;
- (id)annotationImageForHandle:(id)a0;
- (id)businessInfoFooterViewForSection:(long long)a0;
- (void)businessInfoView:(id)a0 infoButtonTapped:(id)a1;
- (double)calculateHeightForExpanseActivityHeader;
- (double)calculateHeightForGroupPhotoHeader;
- (double)calculateHeightForLocationSharingFooter;
- (double)calculateHeightForSIMLabelCell;
- (double)calculateHeightForShareAutomaticallyFooter;
- (id)chatOptionsCellForIndexPath:(id)a0;
- (id)childViewController:(id)a0 cellForIndexPath:(id)a1;
- (void)collapseContactsSection;
- (struct CGSize { double x0; double x1; })computedPreferredContentSize;
- (void)configureGroupPhotoHeaderForCell:(id)a0;
- (void)contactsCellDidTapFaceTimeVideoButton:(id)a0;
- (void)contactsCellDidTapMessagesButton:(id)a0;
- (void)contactsCellDidTapPhoneButton:(id)a0;
- (id)contactsInChat:(id)a0 forContactsKeyDescriptors:(id)a1;
- (id)contactsManagerCellForIndexPath:(id)a0;
- (void)contactsManagerViewModelsDidChange:(id)a0;
- (BOOL)conversationHasLeft;
- (BOOL)conversationIsGroupSMS;
- (id)createDNDCellAtIndexPath:(id)a0;
- (id)createReadReceiptsCellAtIndexPath:(id)a0;
- (id)createShareFocusStatusCellAtIndexPath:(id)a0;
- (id)currentlyActiveFMFDevice;
- (id)defaultNavBarAppearance;
- (void)detailsAddGroupNameView:(id)a0 didCommitGroupName:(id)a1;
- (void)detailsSearchController:(id)a0 requestsPushOfSearchController:(id)a1;
- (void)detailsSearchControllerContentDidChange:(id)a0;
- (void)doNotDisturbValueChange:(id)a0;
- (id)downloadAttachmentsFooterViewForSection:(long long)a0;
- (id)downloadAttachmentsText;
- (id)downloadButtonText;
- (id)editConversationCellForIndexPath:(id)a0;
- (id)emailAddressesForChat:(id)a0;
- (void)expandContactsSection;
- (id)expanseActivityCellForIndexPath:(id)a0;
- (id)expanseActivityHeaderViewForSection:(long long)a0;
- (id)fmfHandlesFromIMHandles:(id)a0;
- (void)fmfMapViewController:(id)a0 didDeselectHandle:(id)a1;
- (void)fmfMapViewController:(id)a0 didSelectHandle:(id)a1;
- (id)fmfViewControllerCellForIndexPath:(id)a0 shouldShowLocation:(BOOL)a1;
- (void)groupCellDidTapFaceTimeVideoButton:(id)a0;
- (void)groupCellDidTapPhoneButton:(id)a0;
- (id)groupCountCellForIndexPath:(id)a0;
- (id)groupHeaderCellForIndexPath:(id)a0;
- (id)groupNameCellForIndexPath:(id)a0;
- (id)groupPhotoCellForIndexPath:(id)a0;
- (void)handleActiveDeviceChanged:(id)a0;
- (void)handleCancelAction:(id)a0;
- (void)handleDoneAction:(id)a0;
- (void)handleDoneButton:(id)a0;
- (void)handleFriendshipStatusChanged:(id)a0;
- (void)handleTapOnChromeAvatar:(id)a0;
- (BOOL)hasTUConversation;
- (id)initWithConversation:(id)a0;
- (void)initializeBusinessInfoViewIfNecessary;
- (void)initializeLocationSharingTextViewIfNecessary;
- (void)initializeSearchController;
- (BOOL)isContactViewController:(id)a0;
- (BOOL)isContactsSectionCollapsible;
- (id)labelForChat;
- (id)leaveCellForIndexPath:(id)a0;
- (id)locationFooterViewForSection:(long long)a0;
- (id)locationShareCellForIndexPathRow:(long long)a0;
- (id)locationShareMenu;
- (void)metricDSDSLineSwitchWithPreviousServiceName:(id)a0 newServiceName:(id)a1 isGroupConversation:(BOOL)a2;
- (void)openInContacts;
- (void)presentGroupRecipientSelectionControllerAtIndexPath:(id)a0;
- (void)presentLeaveActionSheetFromView:(id)a0;
- (long long)rowForAddMemberCell;
- (long long)rowForFirstContactCell;
- (long long)rowForLastContact;
- (long long)rowForShowMoreContactsCell;
- (long long)rowForTUConversationCell;
- (id)screenShareContextMenuForEntity:(id)a0;
- (id)screenSharingActionView;
- (id)searchAttachmentViewControllerCellForIndexPath:(id)a0;
- (void)sendCurrentLocation;
- (void)setHideAlerts:(BOOL)a0 reload:(BOOL)a1;
- (void)setSendReadReceipts:(BOOL)a0 reload:(BOOL)a1;
- (void)setShareFocusStatus:(BOOL)a0 reload:(BOOL)a1;
- (void)setShowInSharedWithYou:(BOOL)a0 reload:(BOOL)a1;
- (void)setupContactsManager;
- (void)setupFMF;
- (void)setupFMFTimerIfNecessary;
- (id)setupGroupIdentityActionsForChat:(id)a0;
- (void)shareFocusStatusSwitchValueChanged:(id)a0;
- (id)sharedWithYouCellForIndexPath:(id)a0;
- (id)sharedWithYouFooterViewForSection:(long long)a0;
- (BOOL)shouldAddToVisibleContactRowCountForTUConversation;
- (BOOL)shouldDisplayFooterForSection:(unsigned long long)a0;
- (BOOL)shouldDisplayHeaderForSection:(unsigned long long)a0;
- (BOOL)shouldShowActiveDeviceSwitchFooter;
- (BOOL)shouldShowAddMemberCell;
- (BOOL)shouldShowBusinessInfoFooter;
- (BOOL)shouldShowExpanseFeatures;
- (BOOL)shouldShowFMFView;
- (BOOL)shouldShowGroupAddNameField;
- (BOOL)shouldShowGroupCount;
- (BOOL)shouldShowLocationStringForOneToOneConversation;
- (id)simCellText:(id)a0;
- (id)simTypeCellForIndexPath:(id)a0;
- (void)spacePressed:(id)a0;
- (id)switchSubscriptionCellForIndexPathRow:(long long)a0;
- (void)switchSubscriptionToContext:(id)a0;
- (id)switchToLabelForChat;
- (id)titleForBackButton;
- (void)toggleHideAlertsWithReload:(BOOL)a0;
- (void)toggleSendReadReceiptsWithReload:(BOOL)a0;
- (void)toggleShareFocusStatusWithReload:(BOOL)a0;
- (void)toggleShowInSharedWithYouWithReload:(BOOL)a0;
- (id)transparentNavBarAppearance;
- (id)tuConversation;
- (void)updateLocationForRecipient:(id)a0;
- (void)updateLocationStringCellWithString:(id)a0;
- (void)updateManualScrollEdgeProgress;
- (void)updateScreenSharingStatusAndViews;
- (void)updateTimedFMFState;
- (void)userDidTapDownloadForAttachmentsFooterView:(id)a0;
- (long long)visibleContactsRows;

@end