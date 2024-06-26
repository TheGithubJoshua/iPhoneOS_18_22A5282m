@class HUBannerView, UIBarButtonItem, NSString, HUSoftwareUpdateStandaloneItemManager, HUFirmwareUpdateItemModuleController, HUGridLayoutOptions, HUSoftwareUpdateItemModuleController, NAFuture;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUBannerViewDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate>

@property (readonly, nonatomic) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (retain, nonatomic) HUFirmwareUpdateItemModuleController *firmwareUpdateItemModuleController;
@property (retain, nonatomic) UIBarButtonItem *updateAllBarButton;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (retain, nonatomic) HUBannerView *softwareUpdateBannerView;
@property (nonatomic) BOOL allowRefresh;
@property (nonatomic) BOOL viewVisible;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) BOOL showDoneButtonInNavBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)keyCommands;
- (id)initWithHome:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (id)_createUpdateAllBarButton;
- (void)_didTapUpdateAllButton:(id)a0;
- (BOOL)_homePodSoftwareUpdateInProgress;
- (void)_kickoffSoftwareUpdate;
- (void)_presentHomePodSoftwareUpdateAlreadyInProgressAlert;
- (void)_refreshUpdateAllBarButton;
- (void)_triggerRefresh:(id)a0;
- (void)bannerView:(id)a0 footerViewTapped:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (id)itemModuleControllers;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (id)softwareUpdateModuleController:(id)a0 dismissViewController:(id)a1;
- (id)softwareUpdateModuleController:(id)a0 navigateToViewController:(id)a1;
- (id)softwareUpdateModuleController:(id)a0 presentViewController:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
