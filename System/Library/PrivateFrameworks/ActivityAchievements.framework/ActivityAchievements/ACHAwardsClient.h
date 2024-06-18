@class NSUUID, HKNanoSyncControl, HKTaskServerProxyProvider, NSString;
@protocol ACHAwardsServerInterface;

@interface ACHAwardsClient : NSObject <_HKXPCExportable>

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) id<ACHAwardsServerInterface> serverProxy;
@property (retain, nonatomic) HKNanoSyncControl *nanoSyncControl;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (copy, nonatomic) id /* block */ injectedErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isProtectedDataAvailable;
- (id)initWithHealthStore:(id)a0;
- (BOOL)removeTemplates:(id)a0 error:(id *)a1;
- (void)connectionInvalidated;
- (BOOL)addEarnedInstances:(id)a0 error:(id *)a1;
- (id)remoteInterface;
- (id)countOfEarnedInstancesForTemplateUniqueName:(id)a0 error:(id *)a1;
- (id)fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)a0 error:(id *)a1;
- (id)countOfEarnedInstancesForTemplateUniqueNames:(id)a0 error:(id *)a1;
- (BOOL)removeEarnedInstances:(id)a0 error:(id *)a1;
- (BOOL)addTemplates:(id)a0 removingTemplates:(id)a1 error:(id *)a2;
- (BOOL)removeEarnedInstancesForTemplateUniqueName:(id)a0 error:(id *)a1;
- (void)_addPluginProxyErrorHandler:(id /* block */)a0;
- (BOOL)removeTemplate:(id)a0 error:(id *)a1;
- (id)fetchAllEarnedInstancesWithError:(id *)a0;
- (void).cxx_destruct;
- (void)triggerSyncWithCompletion:(id /* block */)a0;
- (id)fetchAllTemplatesWithError:(id *)a0;
- (BOOL)addTemplates:(id)a0 error:(id *)a1;
- (BOOL)removeAllTemplatesWithError:(id *)a0;
- (BOOL)removeAllEarnedInstancesWithError:(id *)a0;
- (id)exportedInterface;
- (id)fetchEarnedInstancesForTemplateUniqueName:(id)a0 error:(id *)a1;
- (id)addEarnedInstances:(id)a0 removingEarnedInstances:(id)a1 error:(id *)a2;
- (id)fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)a0 error:(id *)a1;
- (id)fetchEarnedInstancesForEarnedDateComponents:(id)a0 error:(id *)a1;
- (void)_injectProxyProvider:(id)a0;

@end
