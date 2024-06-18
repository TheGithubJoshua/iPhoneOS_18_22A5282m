@class PSSpecifier, PSUIAppDataUsageGroup, NSString, CoreTelephonyClient;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property BOOL shouldCalculateUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (id)getLogger;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)selectSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)dealloc;
- (void)_handleCellularPlanChangedNotification:(id)a0;
- (void)_handleNewCarrierNotification:(id)a0;
- (void)_handleWirelessDataUsageChangedNotification:(id)a0;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;

@end
