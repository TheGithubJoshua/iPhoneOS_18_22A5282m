@class NSString, HDHeartbeatSeriesFeatureStatusManager;

@interface HDHeartbeatSeriesFeatureStatusManagerServer : HDStandardTaskServer <HKHeartbeatSeriesFeatureStatusManagerServer, HDHeartbeatSeriesFeatureStatusManagerDelegate> {
    HDHeartbeatSeriesFeatureStatusManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)configurationClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_stopObservingChanges;
- (id)_clientRemoteObjectProxy;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (void)heartbeatSeriesFeatureStatusManager:(id)a0 didFailToUpdateWithError:(id)a1;
- (void)heartbeatSeriesFeatureStatusManager:(id)a0 didUpdatePredominantFeature:(long long)a1;
- (void)remote_updateAndNotifyAllObservers;

@end
