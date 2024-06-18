@class NSString, _HKDelayedOperation, HDMCProfileExtension;

@interface HDMCDaySummaryObserverQueryServer : HDQueryServer <HDDataObserver> {
    HDMCProfileExtension *_profileExtension;
    _HKDelayedOperation *_updateOperation;
    BOOL _requiresUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (id)objectTypes;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void).cxx_destruct;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_stop;
- (void)_queue_deliverUpdate;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 profileExtension:(id)a4;

@end
