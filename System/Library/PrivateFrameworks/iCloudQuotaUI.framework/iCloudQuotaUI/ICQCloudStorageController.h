@class NSTimer, ICQCloudStorageGroupController, ICQUpgradeFlowManager;

@interface ICQCloudStorageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    ICQUpgradeFlowManager *_quotaManager;
    NSTimer *_storageUpgradeOfferTimer;
}

- (id)specifiers;
- (void)handleURL:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_storageUpgrade;
- (void)_changeStoragePlan;
- (void)_storageUpgradeOfferNotification:(id)a0;
- (void)_storageUpgradeOfferTimeout:(id)a0;

@end
