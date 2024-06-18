@class UIBarButtonItem, CNContainerDataSource, UIKeyCommand, UICollectionView, _UIDiffableDataSourceOutlineSectionController, CNAccountsAndGroupsDataSource, CNUIEditAuthorizationController, UIViewController, UICollectionViewDiffableDataSource, CNUIGroupsAndContainersSaveManager, CNUIUserActivityManager, NSString, CNAccountsAndGroupsActionsProvider, CNManagedConfiguration, CNAccountsAndGroupsAuthorizationContext;
@protocol CNAccountsAndGroupsViewControllerDelegate;

@interface CNAccountsAndGroupsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDropDelegate, CNUIEditAuthorizationControllerDelegate, CNAccountsAndGroupsCellDelegate, CNAccountsAndGroupsActionsProviderDelegate, CNContactListActionDelegate>

@property (nonatomic) BOOL needsReload;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController;
@property (retain, nonatomic) CNContainerDataSource *containerDataSource;
@property (retain, nonatomic) CNAccountsAndGroupsAuthorizationContext *currentAuthorizationContext;
@property (retain, nonatomic) CNAccountsAndGroupsActionsProvider *actionsProvider;
@property (readonly, nonatomic) CNUIUserActivityManager *activityManager;
@property (nonatomic) long long buttonBehavior;
@property (retain, nonatomic) UIKeyCommand *addGroupKeyCommand;
@property (retain, nonatomic) UIViewController *potentiallyPresentedViewController;
@property (retain) UICollectionView *collectionView;
@property (retain) _UIDiffableDataSourceOutlineSectionController *sectionController;
@property (retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) UIBarButtonItem *addGroupBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (weak, nonatomic) id<CNAccountsAndGroupsViewControllerDelegate> delegate;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCanceling;
@property (nonatomic) BOOL allowsDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)allowedDropTypes;

- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 highlightPreviewForItemAtIndexPath:(id)a2;
- (void)actionDidFinish:(id)a0;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 dismissalPreviewForItemAtIndexPath:(id)a2;
- (void)_updateUserActivity;
- (void)keyboardWillHide:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissKeyboard;
- (void)action:(id)a0 presentViewController:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)cancel:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)shouldEnableItem:(id)a0;
- (BOOL)isAnyListCellCurrentlyEditing;
- (id)presentingViewControllerForActions;
- (BOOL)isCollectionViewEditing;
- (void)item:(id)a0 didEndEditingWithName:(id)a1;
- (void)viewDidLoad;
- (void)editAuthorizationController:(id)a0 authorizationDidFinishWithResult:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)reloadAddGroupButton;
- (void)reloadData;
- (void)presentErrorAlertWithTitle:(id)a0 message:(id)a1 animated:(BOOL)a2;
- (id)multitaskingDragExclusionRects;
- (void)keyboardWillShow:(id)a0;
- (id)layout;
- (void)contactStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)expandSectionForAccountWithIdentifier:(id)a0;
- (id)menuForContainers;
- (void)setEditingForGroupItem:(id)a0;
- (BOOL)shouldShowCancelButton;
- (void)deselectAllItems;
- (void)cellTextViewDidChangeHeight;
- (void)setUpCollectionView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)cleanUpItemIfNeeded:(id)a0;
- (void)selectCurrentItemIfNeeded;
- (void)didTapCollectionView:(id)a0;
- (void)presentController:(id)a0 animated:(BOOL)a1;
- (BOOL)viewCanReload;
- (void)resignAllFirstRespondersSavingCurrentlyEditing:(BOOL)a0;
- (void)dealloc;
- (BOOL)collectionView:(id)a0 canHandleDropSession:(id)a1;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)addDefaultGroup:(id)a0;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)authorizedSetCollectionViewEditing:(BOOL)a0;
- (void)configureDataSource;
- (void)restoreCurrentlyEditingGroupIfNeeded;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)reloadCollectionViewForSectionWithIdentifier:(id)a0 settingFilterForEditingItem:(BOOL)a1 allowsReloadWhenEditing:(BOOL)a2;
- (void)showEditAuthorizationPaneWithAuthorizationContext:(id)a0 animated:(BOOL)a1;
- (id)currentlySelectedItem;
- (BOOL)editingCollectionViewRequiresAuthorization;
- (void)expandLargeTitle;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)selectAllContacts;
- (void)expandLargeTitleIfNeeded;
- (id)groupsStyle;
- (void)presentErrorAlertWithMessage:(id)a0 animated:(BOOL)a1;
- (void)authorizedSetViewEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadCollectionViewAddingPlaceholderItem:(id)a0 inSectionWithIdentifier:(id)a1;
- (void)authorizedAddContacts:(id)a0 toDestinationItem:(id)a1;
- (BOOL)shouldSetFirstResponder;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)reloadCollectionViewDeletingItem:(id)a0;
- (BOOL)isNotificationInternalSave:(id)a0;
- (void)updateNavigationButtons;
- (void)updateToolbarVisibility;

@end