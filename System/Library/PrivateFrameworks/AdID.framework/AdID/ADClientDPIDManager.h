@class NSDate, CKRecordID, NSString, NSObject, CKRecordZoneID, NSMutableArray, CKContainer;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject {
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *recordIDLegacy;
@property (retain, nonatomic) CKContainer *privateContainer;
@property (nonatomic) BOOL isPrivateContainerSecure;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *DPID;
@property (nonatomic) BOOL updateInProgress;
@property (retain, nonatomic) NSMutableArray *operationsInProgress;
@property (nonatomic) BOOL sandboxEnvironment;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property unsigned long long dpidReconcileState;
@property (retain) NSDate *dpidReconcileStartDate;
@property (readonly, nonatomic) BOOL isTest;

+ (id)sharedInstance;
+ (id)DPIDOperationTypeToString:(unsigned long long)a0;

- (void)setiCloudAccountSubscribed:(BOOL)a0;
- (id)init;
- (void)resetEncryptedZone:(id /* block */)a0;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (void)retryIfNeeded:(id /* block */)a0;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (id)generateDPID;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (BOOL)shouldSyncDPID;
- (void)handleCloudKitError:(id)a0;
- (BOOL)iCloudAccountSubscribed;
- (BOOL)canGenerateDPID;
- (void)finishOperation:(unsigned long long)a0;
- (BOOL)isLoggedIntoiTunes;
- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRestrictedByApple;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (void)updateActiveRecordICloudDSID;
- (BOOL)canContinueProcessing:(id)a0;
- (BOOL)devicePersonalizedAdsEnabled;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (void).cxx_destruct;
- (id)secureContainer;
- (void)reconcileDPID:(id /* block */)a0;
- (id)operationQueueLog;
- (void)resetDPID:(id /* block */)a0;
- (void)writeDPIDtoKeychain;
- (id)subscriptionIdentifier;
- (void)startOperation:(unsigned long long)a0;
- (id)insecureContainer;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (void)setupLocalDPID;
- (id)containerWithIDString:(id)a0;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (id)primaryiCloudAccountAltDSID;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;

@end
