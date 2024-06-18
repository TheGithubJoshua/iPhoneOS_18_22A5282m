@class NSString, ACMonitoredAccountStore, RCManagedConfigurationHelper;
@protocol RCCloudSyncAccessManagerDelegate;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate> {
    ACMonitoredAccountStore *_accountStore;
    BOOL _monitoringAccountChanges;
    RCManagedConfigurationHelper *_managedConfigurationHelper;
    int _tccNotifyToken;
}

@property (readonly) ACMonitoredAccountStore *accountStore;
@property (weak, nonatomic) id<RCCloudSyncAccessManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL cloudSyncIsAvailable;
@property (nonatomic) int tccCloudAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startMonitoringAccountChanges;
- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)startMonitoringAccountChanges;
- (void).cxx_destruct;
- (void)_availabilityChanged;
- (void)managedConfigurationUpdated:(BOOL)a0;
- (void)dealloc;

@end
