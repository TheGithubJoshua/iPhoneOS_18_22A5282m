@class PSUICellularPlanListGroup, PSUISubscriptionContextMenusGroup, PSBundleController, PSUIPlanPendingTransferListGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanDetailGroup, TSSIMSetupFlow, NSString, PSSpecifier, PSUICarrierItemGroup, PSUIAddOnPlanGroup, CoreTelephonyClient, PSUICellularUsageSchedulingGroup;

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupDelegate> {
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    BOOL _disabled;
    BOOL _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSBundleController *_personalHotspotBundleController;
    PSSpecifier *_addCellularPlanSpecifier;
    BOOL _shouldCalculateDataUsage;
}

@property (retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup;
@property (retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup;
@property (retain, nonatomic) PSUICellularPlanListGroup *cellularPlanListGroup;
@property (retain, nonatomic) PSUICarrierItemGroup *carrierItemGroup;
@property (retain, nonatomic) PSUIAddOnPlanGroup *addOnPlanGroup;
@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;
@property (retain, nonatomic) PSUICellularUsageSchedulingGroup *appUsageGroup;
@property (retain, nonatomic) PSUIPlanPendingTransferListGroup *planPendingTransferGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)handleURL:(id)a0;
- (id)init;
- (void)airplaneModeChanged;
- (id)getLogger;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)selectSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)getTetheringStatus:(id)a0;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isCellularDisabled;
- (void)launchWebsheet:(id)a0 completion:(id /* block */)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)prefetchResourcesFor:(id)a0;
- (void)newCarrierNotification;
- (id)createCarrierItemGroupIfNeeded:(id)a0;
- (void)wirelessDataUsageCacheRefreshed;
- (id)_deadTelephonySpecifiers;
- (id)activeDataPlanLabel;
- (id)appUsageGroupTitle;
- (id)carrierItemGroupSpecifier;
- (void)carrierItemsChanged;
- (id)cellularDataOptionsDetailText:(id)a0;
- (void)cellularDataSettingChanged;
- (void)cellularPlanChanged:(id)a0;
- (void)configureAddOnPlanTurnOnWifi:(id)a0;
- (void)createAddCellularPlanSpecifierIfNeeded;
- (void)createOrUpdateSubscriptionContextMenuGroup:(id)a0;
- (id)createPersonalHotspotSpecifier;
- (BOOL)deviceIsDualSIMCapableAndPlansExist;
- (void)disableSpecifiersIfNeeded:(id)a0;
- (BOOL)eSIMExistsInSubscriptionContexts;
- (void)entitlementStatusChanged;
- (void)learnMoreLinkTapped;
- (void)perAppNetworkDataAccessPolicyChanged;
- (id)removePlanConfirmationMessage:(id)a0;
- (id)removePlanConfirmationTitle:(id)a0;
- (void)retryCarrierListFetch:(id)a0;
- (void)setSubscriptionContextAndPlanProperties;
- (void)setUpActivationSpecifiers:(id)a0;
- (void)setUpAddPlanGroup:(id)a0;
- (void)setUpAppUsageGroup:(id)a0;
- (void)setUpCellularDataOptionsGroup:(id)a0;
- (void)setUpCellularListGroup:(id)a0;
- (void)setUpDataOnlyPlanListGroupIfNeeded:(id)a0;
- (void)setUpDefaultVoiceGroup:(id)a0;
- (void)setUpFacetimeSetupGroup:(id)a0;
- (void)setUpPlanPendingTransferListGroup:(id)a0;
- (void)setUpSubscriptionContextMenusGroup:(id)a0;
- (void)setupCellularFaceTime:(id)a0;
- (BOOL)shouldShowAddPlanButton;
- (BOOL)shouldShowDataPlans;
- (BOOL)shouldShowFaceTimeSetup;
- (BOOL)shouldShowNoSIMsOrActivatePlansUI;
- (BOOL)shouldUpdateHeaderForSIM;
- (BOOL)showDataPlanOnly;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (void)turnOnLocationServicesPressed:(id)a0;
- (void)turnOnWifiPressed:(id)a0;
- (void)updatePaneWithCellularDataState:(BOOL)a0;
- (void)wirelessDataUsageChangedNotification;

@end
