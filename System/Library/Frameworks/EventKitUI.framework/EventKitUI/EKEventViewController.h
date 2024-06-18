@class EKCustomTitleView, EKEventDetailItem, _UIAccessDeniedView, NSMutableDictionary, NSDictionary, UITableView, UIViewController, EKUIRecurrenceAlertController, EKEventEditViewController, UIScrollView, UIView, EKEvent, NSString, EKUIEventStatusButtonsView, NSArray, SingleToolbarItemContainerView, EKEventTitleDetailItem;
@protocol EKEventViewDelegate;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailTextCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, EKUIPasteboardManagerCutDelegate, EKEventDetailItemDelegate, EKEventEditViewDelegatePrivate, EKUIManagedViewController> {
    NSArray *_items;
    EKEvent *_event;
    BOOL _ignoreDBChanges;
    long long _lastAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    long long _disclosedTableSection;
    struct _NSRange { unsigned long long location; unsigned long long length; } _disclosedTableRange;
    long long _pendingStatus;
    EKEventEditViewController *_activeEventEditor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    long long _lastOrientation;
    EKEventTitleDetailItem *_titleItem;
    EKCustomTitleView *_customTitle;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    BOOL _didAppear;
    BOOL _countedAppearance;
    BOOL _autoPop;
    BOOL _showsPreview;
    BOOL _hidePreview;
    BOOL _calendarPreviewIsInlineDayView;
    BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
    BOOL _trustsStatus;
    BOOL _needsReload;
    BOOL _itemsNeedReload;
    BOOL _dead;
    BOOL _tableIsBeingEdited;
    BOOL _minimalMode;
    NSArray *_currentSections;
    int _scrollToSection;
    UIView *_headerView;
    NSArray *_headerConstraints;
    NSArray *_tableViewTopConstraints;
    UIView *_blankFooterView;
    double _lastFooterLayoutWidth;
    BOOL _showingBlankFooterView;
    UIViewController *_presentationSourceViewController;
    NSMutableDictionary *_cellHeights;
    EKEventEditViewController *_editViewControllerForPasteboard;
    EKEventViewController *_strongSelf;
}

@property (weak, nonatomic) UIViewController *presentationSourceViewController;
@property BOOL viewIsVisible;
@property (nonatomic) BOOL hideCalendarPreview;
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) int scrollToSection;
@property (nonatomic, getter=isICSPreview) BOOL ICSPreview;
@property (nonatomic) BOOL allowsInviteResponses;
@property (nonatomic) BOOL showsAddToCalendarForICSPreview;
@property (nonatomic) BOOL showsUpdateCalendarForICSPreview;
@property (nonatomic) BOOL showsDeleteForICSPreview;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsOutOfDateMessage;
@property (nonatomic) BOOL showsDelegatorMessage;
@property (nonatomic) BOOL showsDelegateMessage;
@property (nonatomic) BOOL showsDetectedConferenceItem;
@property (nonatomic) BOOL minimalMode;
@property (nonatomic) BOOL noninteractivePlatterMode;
@property (nonatomic) BOOL isLargeDayView;
@property (nonatomic) int editorShowTransition;
@property (nonatomic) int editorHideTransition;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly, nonatomic) UIScrollView *eventDetailsScrollView;
@property (readonly, nonatomic) UIViewController *eventDetailsViewController;
@property (retain, nonatomic) NSDictionary *context;
@property (weak, nonatomic) id<EKEventViewDelegate> delegate;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCalendarPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)popViewControllersAfterAndIncluding:(id)a0 fromNavigationController:(id)a1 animated:(BOOL)a2;
+ (id)_orderedActionsForMask:(long long)a0;
+ (void)setDefaultDatesForEvent:(id)a0;
+ (void)adjustLayoutForCell:(id)a0 tableViewWidth:(double)a1 numRowsInSection:(unsigned long long)a2 cellRow:(unsigned long long)a3 forceLayout:(BOOL)a4;

- (void)detailItem:(id)a0 wantsIndexPathsScrolledToVisible:(id)a1;
- (id)items;
- (id)getCurrentContext;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)resetBackgroundColor;
- (void)_presentDetachSheetFromView:(id)a0;
- (void)_prepareEventForEdit;
- (void)_didToggleMinimalMode;
- (BOOL)_shouldDisplayStatusButtons;
- (id /* block */)_detachSheetHandler;
- (id)initWithContext:(id)a0;
- (void)copy:(id)a0;
- (id)_indexPathForAttendeesDetailItem;
- (void)_unsubscribeClicked:(id)a0;
- (BOOL)shouldShowEditButtonInline;
- (void)_keyboardWasShown:(id)a0;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_reloadIfNeeded;
- (BOOL)canManagePresentationStyle;
- (void)_notifyDetailItemsOfVisibilityOnScreen;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (id)viewControllerForEventItem:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_performEditKeyCommand;
- (id)pasteboardManagerForEventEditViewController:(id)a0;
- (void)_updateTableContentInsetForKeyboard:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_isDisplayingInvitation;
- (id)_itemAtIndexPath:(id)a0 section:(id *)a1 subitemIndex:(unsigned long long *)a2;
- (void)_updateHeaderAndFooterIfNeeded;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_refreshEventAndReload;
- (void)eventItemDidEndEditing:(id)a0;
- (void)_setNeedsReloadIncludingItems:(BOOL)a0;
- (BOOL)_shouldDisplayDoneButton;
- (void)eventStatusButtonsView:(id)a0 didSelectAction:(long long)a1 ifCancelled:(id /* block */)a2;
- (void)_presentValidationAlert:(id)a0;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)_performDelete:(long long)a0 editor:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)eventItemDidStartEditing:(id)a0;
- (void)_localeChanged;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (void)setActiveEventEditor:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_saveStatus:(long long)a0 sourceViewForPopover:(id)a1;
- (void)presentEditorAnimated:(BOOL)a0;
- (id)accessDeniedView;
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)a0;
- (long long)_actionsMask;
- (void)eventDetailItemAccessoryButtonTapped:(id)a0;
- (void)completeWithAction:(long long)a0;
- (void)viewDidLoad;
- (BOOL)_isDisplayingDeletableEvent;
- (void)eventItemDidCommit:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)_updateTableContentForSizeCategoryChange:(id)a0;
- (BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)allowContextProvider:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)openAttendeesDetailItem;
- (void)_doneButtonPressed:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_proposedDate;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (void)setTopInset:(double)a0;
- (void)_updateStatusButtonsActions;
- (void)_updateResponse;
- (void)_acceptProposedTimeWithSourceViewForPopover:(id)a0;
- (void).cxx_destruct;
- (id)_statusButtonsView;
- (id)_indexPathForSection:(int)a0;
- (void)_updateResponseVisibility;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)_backingEventAllowsEditing;
- (void)_setObservesKeyboardNotifications:(BOOL)a0;
- (id)tableView;
- (void)_rejectProposedTime;
- (double)eventStatusButtonsViewButtonFontSize:(id)a0;
- (void)_saveStatus:(long long)a0 span:(long long)a1;
- (struct CGSize { double x0; double x1; })_idealSize;
- (void)detailItem:(id)a0 wantsRowReload:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateNavBarAnimated:(BOOL)a0;
- (BOOL)_shouldPopSelf;
- (void)editButtonPressed;
- (id)editorForEventDetailItem:(id)a0;
- (void)eventStatusButtonsView:(id)a0 calculatedFontSizeToFit:(double)a1;
- (void)setNeedsReload;
- (void)viewLayoutMarginsDidChange;
- (void)invokeAction:(long long)a0 eventStatusButtonsView:(id)a1;
- (void)_pop;
- (void)editEvent;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)doneButtonPressed;
- (void)eventItemDidSave:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)topInset;
- (void)_keyboardWasHidden:(id)a0;
- (void)_setUpForEvent;
- (BOOL)_navigationBarShouldBeHidden;
- (void)_teardownTableView;
- (void)updateTitleWithScrollView:(id)a0 animation:(BOOL)a1;
- (void)detailItem:(id)a0 performActionsOnCellAtIndexPath:(id)a1 actions:(id /* block */)a2;
- (BOOL)_canPerformEditKeyCommand;
- (void)dealloc;
- (BOOL)_shouldShowEditButton;
- (void)_deleteSuggestionTapped:(id)a0;
- (id)activeEventEditor;
- (BOOL)_performSave:(long long)a0 animated:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (id)_statusButtons;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_cancelProposedTime;
- (id)viewTitle;
- (void)cut:(id)a0;
- (id)_footerLabelContainingText:(id)a0;
- (void)_dismissEditor:(BOOL)a0 deleted:(BOOL)a1;
- (void)_addToCalendarClicked:(id)a0;
- (double)tableViewSectionContentWidth;
- (id)editorForPasteboardManager:(id)a0;
- (void)eventItem:(id)a0 wantsViewControllerPresented:(id)a1;
- (BOOL)_isDisplayingSuggestion;
- (void)_clearCustomTitle;
- (void)attemptDisplayReviewPrompt;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)a0;
- (id)_viewControllerForEditorPresentation;
- (void)eventDetailItemWantsRefresh:(id)a0;
- (void)_deleteClicked:(id)a0;
- (BOOL)wantsManagement;
- (void)detailItem:(id)a0 wantsRowInsertions:(id)a1 rowDeletions:(id)a2 rowReloads:(id)a3;
- (BOOL)_shouldShowInlineButtonFromDelegate;
- (BOOL)_isDisplayingSelfOrganizedInvitation;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (unsigned long long)_sectionForDetailItem:(id)a0;
- (void)_storeChanged:(id)a0;
- (void)_presentDetachSheetFromBarButtonItem:(id)a0;
- (id)optionalModel;
- (id)_sectionAtIndex:(long long)a0;
- (id)_statusButtonsContainerView;

@end