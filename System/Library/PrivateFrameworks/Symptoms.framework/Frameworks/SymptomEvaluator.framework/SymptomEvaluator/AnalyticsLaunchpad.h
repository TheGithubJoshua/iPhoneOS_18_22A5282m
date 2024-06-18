@class NSString, NSMutableDictionary, AWDAgent, NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol> {
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
}

@property (retain, nonatomic) NSMutableDictionary *launchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)integrityCheckBreadcrumbCount;
+ (void)leaveBreadcrumbForInitialWorkspaceSave;
+ (BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)a0;
+ (id)sharedInstance;
+ (BOOL)foundDestroyPersistentStoreBreadcrumb;
+ (void)postLaunchIntervalMetricWithPreviousLaunchTime:(unsigned long long)a0;
+ (void)clearInitialWorkspaceSaveBreadcrumb;
+ (BOOL)foundInitialWorkspaceSaveBreadcrumb;
+ (void)clearDestroyPersistentStoreBreadcrumb;
+ (id)configureClass:(id)a0;
+ (void)leaveBreadcrumbForDestroyPersistentStore;
+ (id)symptomEvaluatorDatabaseContainerPath;
+ (void)clearIntegrityCheckBreadcrumb;
+ (BOOL)launchHealthCheck:(id)a0;
+ (BOOL)foundBreadcrumb:(id)a0;
+ (void)appendLaunchTime;
+ (void)leaveBreadcrumbForIntegrityCheck;

- (int)configureInstance:(id)a0;
- (id)init;
- (void)integrityCheckCompleted:(BOOL)a0 error:(id)a1;
- (void)deleteDatabaseCompleted:(BOOL)a0 error:(id)a1;
- (void)destroyPersistentStoreCompleted:(BOOL)a0 error:(id)a1;
- (void)_launchSequence:(id)a0;
- (void)integrityCheckStarted;
- (void).cxx_destruct;
- (void)destroyPersistentStoreStarted;
- (void)launchSequence;

@end
