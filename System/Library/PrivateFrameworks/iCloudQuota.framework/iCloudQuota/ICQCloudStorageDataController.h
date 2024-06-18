@class ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
}

@property (nonatomic) BOOL shouldIgnoreCache;

+ (id)_requestQueue;

- (id)initWithAccount:(id)a0;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)a0;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)sendDismissStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)cachedStorageSummary;
- (void)sendDisplayStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;
- (void)fetchStorageAppsWithCompletion:(id /* block */)a0;

@end
