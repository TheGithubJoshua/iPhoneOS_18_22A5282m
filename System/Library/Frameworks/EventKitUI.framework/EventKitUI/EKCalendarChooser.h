@class UIBarButtonItem, NSMutableDictionary, _UIAccessDeniedView, EKEventStore, EKAbstractCalendarEditor, EKCalendar, EKCalendarChooserTableView, UIRefreshControl, EKEvent, NSSet, NSString, EKAccountRefresher, NSMutableSet, EKSource, NSArray, EKUITableViewCell, EKUIFocusBannerTableViewCell, NSIndexPath;
@protocol EKStyleProvider, EKCalendarChooserDelegate;

@interface EKCalendarChooser : UIViewController <EKAccountRefresherDelegate, EKCalendarEditorDelegate, EKUIFocusBannerTableViewCellDelegate> {
    EKAccountRefresher *_currentAccountRefresher;
    NSMutableDictionary *_accountErrorAnalyticsState;
    NSArray *_delegateSources;
    BOOL _showDelegateCalendarsCell;
    NSSet *_currentKnownCalendarIds;
    long long _displayStyle;
    EKUITableViewCell *_showDeclinedEventsCell;
    EKUIFocusBannerTableViewCell *_focusBannerCell;
    UIBarButtonItem *_addCalendarButton;
    BOOL _updatingHeaderHeight;
    BOOL _viewDidAppear;
}

@property (nonatomic) long long selectionStyle;
@property (nonatomic) unsigned long long entityType;
@property (nonatomic) long long lastAuthorizationStatus;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) EKCalendarChooserTableView *tableView;
@property (retain, nonatomic) UIBarButtonItem *showAllButton;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *focusHiddenGroups;
@property (retain, nonatomic) NSArray *allGroups;
@property (nonatomic) int numCalendarsHiddenByFocus;
@property (retain, nonatomic) NSIndexPath *checkedRow;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider;
@property (nonatomic) struct { unsigned char listIsFlat : 1; unsigned char showAll : 1; unsigned char showColors : 1; unsigned char allSelected : 1; unsigned char allowsRotation : 1; unsigned char showsDoneButton : 1; unsigned char showsCancelButton : 1; unsigned char showsWritableCalendarsOnly : 1; unsigned char showsRefreshButton : 1; unsigned char allowsPullToRefresh : 1; unsigned char disableCalendarsUnselectedByFocus : 1; unsigned char hideCalendarsFilteredByFocus : 1; unsigned char promptToDisableFilterByFocus : 1; unsigned char useMoonForCheckbox : 1; } flags;
@property (retain, nonatomic) NSMutableSet *selectedCalendarSet;
@property (retain, nonatomic) EKSource *limitedToSource;
@property (retain, nonatomic) _UIAccessDeniedView *accessDeniedView;
@property (retain, nonatomic) EKAbstractCalendarEditor *presentedEditor;
@property (nonatomic) BOOL canShowIdentityChooser;
@property (nonatomic) BOOL canShowDelegateSetupCell;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic) BOOL allowsRotation;
@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (nonatomic) int chooserMode;
@property (nonatomic) BOOL disableCalendarEditing;
@property (nonatomic) BOOL disableCalendarsUnselectedByFocus;
@property (nonatomic) BOOL showsRefreshButton;
@property (nonatomic) BOOL allowsPullToRefresh;
@property (nonatomic) BOOL showsDeclinedEventsSetting;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (nonatomic) int explanatoryTextMode;
@property (nonatomic) BOOL showAccountStatus;
@property (nonatomic) BOOL onlyShowUnmanagedAccounts;
@property (nonatomic) BOOL showDetailAccessories;
@property (nonatomic) BOOL allowsEdit;
@property (weak, nonatomic) id<EKCalendarChooserDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSSet *selectedCalendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegatesString;
+ (id)_subscribedLocalizedString;
+ (BOOL)groups:(id)a0 differStructurallyFromGroups:(id)a1;
+ (id)hideAllString;
+ (id)showAllString;

- (void)resetBackgroundColor;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_eventStoreChanged:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)sourceForSelectedIdentity;
- (void)viewWillDisappear:(BOOL)a0;
- (void)cancel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (void)done:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)_ignoredErrorsChanged;
- (id)_tableHeaderView;
- (double)marginForTableView:(id)a0;
- (void)refresh:(id)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)_allCalendars;
- (void)accountRefreshFinished:(id)a0;
- (BOOL)_applySelection;
- (BOOL)_isDeclinedEventsSwitchSection:(long long)a0;
- (id)displayedEditor;
- (void)setAllSelected:(BOOL)a0;
- (long long)_accountErrorActionIndexForGroup:(id)a0;
- (BOOL)_calendarAvailableForEditing:(id)a0;
- (id)_calendarInfoForCalendar:(id)a0;
- (long long)_calendarRowOffsetForGroup:(id)a0;
- (id)_calendarSetToCalendarIdSet:(id)a0;
- (id)_calendarsForSelectedSource;
- (id)_cellIdentifierWithSubtitle:(BOOL)a0 imageAccessoryView:(BOOL)a1;
- (void)_commonAddCalendarButtonPressed:(id)a0;
- (id)_contactForSource:(id)a0;
- (id)_contactNameForSharee:(id)a0;
- (id)_currentKnownCalendarIds;
- (void)_delegateSelectionDidChange:(BOOL)a0;
- (void)_ensureWritableCalendarExists;
- (void)_eventStoreChangedExternally;
- (id)_filterCalendars:(id)a0;
- (void)_finishRefreshing;
- (long long)_focusBannerSection;
- (id)_groupForSection:(long long)a0;
- (long long)_groupsOffset;
- (long long)_identityChooserSection;
- (id)_indexPathForCalendar:(id)a0;
- (BOOL)_isCalendarEnabled:(id)a0;
- (BOOL)_isDelegateCalendarsCellSection:(long long)a0;
- (BOOL)_isFocusBannerSection:(long long)a0;
- (BOOL)_isIdentityChooserSection:(long long)a0;
- (void)_layoutNavToolbarControls;
- (id)_loadCalendars;
- (int)_numSelectedGroups;
- (id)_preferredAddressFromOwnerAddresses:(id)a0;
- (void)_presentEditor:(id)a0 withIndexPath:(id)a1 barButtonItem:(id)a2 permittedArrowDirections:(unsigned long long)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (void)_promptForDisablingFilterByFocusSelectingCalendar:(id)a0 withIndexPath:(id)a1;
- (void)_pulledToRefresh:(id)a0;
- (void)_reloadCalendars;
- (void)_reloadCalendarsForcingTableViewReload:(BOOL)a0;
- (void)_restoreSelection:(id)a0 calendarsForSelectedSource:(id)a1 allCalendars:(id)a2;
- (id)_saveSelection;
- (void)_selectAllCalendarsAndNotify:(BOOL)a0;
- (void)_selectAllCalendarsAndStores:(BOOL)a0;
- (void)_selectCalendar:(id)a0 selected:(BOOL)a1;
- (void)_selectGroup:(id)a0 selected:(BOOL)a1;
- (void)_sendAnalyticsEvent:(unsigned long long)a0 forGroup:(id)a1;
- (void)_setCalendars:(id)a0 changedObjectsHint:(id)a1 forceTableViewReload:(BOOL)a2;
- (void)_setSelectedCalendars:(id)a0 notify:(BOOL)a1;
- (BOOL)_shouldShowAddHolidayCalendarMenuItem;
- (BOOL)_shouldShowDeclinedEventsSection;
- (BOOL)_shouldShowDelegateCalendarsCellSection;
- (BOOL)_shouldShowFocusBanner;
- (BOOL)_shouldShowGroupNameInSection:(long long)a0;
- (BOOL)_shouldShowIdentityChooser;
- (void)_showDeclinedEventsChanged:(id)a0;
- (id)_statusTextForGroup:(id)a0;
- (long long)_tableSectionRow:(long long)a0 toCalendarIndexInGroup:(id)a1;
- (long long)_tableSectionRowToDelegateSourceIndex:(long long)a0;
- (BOOL)_tableShouldDisplayAccountErrorActionCellForGroup:(id)a0;
- (id)_toggleButtonTitleForGroup:(id)a0;
- (void)_updateCurrentKnownCalendarIds;
- (void)_updateDelegateSources;
- (void)_updatePossiblyChangedIndexPaths:(id)a0 possiblyChangedSectionIndices:(id)a1 forGroups:(id)a2 withFirstSection:(long long)a3 changedObjectIDSet:(id)a4 footersChanged:(BOOL)a5 reloadEverything:(BOOL)a6;
- (void)_updateShowDelegateCalendarsCell;
- (void)_updateViewControllerTitle;
- (void)_userDidSelectCalendar:(id)a0 selected:(BOOL)a1 withIndexPath:(id)a2;
- (id)_viewModeTitle;
- (void)addCalendarButtonPressed:(id)a0;
- (void)addHolidayCalendarButtonPressed:(id)a0;
- (void)addSubscribedCalendarButtonPressed:(id)a0 prefillURL:(id)a1;
- (void)calendarEditor:(id)a0 didCompleteWithAction:(int)a1;
- (void)centerOnCalendar:(id)a0;
- (void)centerOnCalendar:(id)a0 animated:(BOOL)a1;
- (id)centeredCalendar;
- (void)declinedEventsChanged;
- (void)focusBannerTableViewCellToggled:(id)a0;
- (void)focusModeConfigurationChanged;
- (void)groupHeaderChangedHeight:(id)a0;
- (void)groupShowAllTapped:(id)a0;
- (BOOL)hasAccountThatCanCreateCalendars;
- (void)identityChanged:(id)a0;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 eventStore:(id)a3;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 forEvent:(id)a3 eventStore:(id)a4 limitedToSource:(id)a5 showIdentityChooser:(BOOL)a6 showDelegateSetupCell:(BOOL)a7 showAccountStatus:(BOOL)a8;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 eventStore:(id)a2;
- (void)openAddRegularCalendarWithTitle:(id)a0;
- (void)presentAccountErrorAlertForGroup:(id)a0;
- (void)redisplayEditor:(id)a0 completion:(id /* block */)a1;
- (void)selectAllCalendars;
- (void)setSelectedCalendarsAndNotify:(id)a0;
- (void)setShowAll:(BOOL)a0;
- (void)setShowsWritableCalendarsOnly:(BOOL)a0;
- (void)showAddSubscribedCalendarWithURL:(id)a0;
- (void)showAllButtonPressed;
- (BOOL)showsWritableCalendarsOnly;
- (void)updateDeclinedEventsCell:(BOOL)a0;

@end