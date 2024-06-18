@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject

@property (readonly, weak) HMDHomeManager *homeManager;

- (id)initWithHomeManager:(id)a0;
- (BOOL)supportsKeyTransferServer;
- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (unsigned long long)dataMigrationOptions;
- (BOOL)isControllerKeyAvailable;
- (id)keyTransferAgent;
- (id)queryDatabaseOperationWithBlock:(id /* block */)a0;

@end
