@class NSUUID, NSError, NSDate, NSHashTable, NSString, CKOperationGroup, BRCSyncContext, NSObject, NSMutableArray, BRCThrottle;
@protocol OS_dispatch_group, OS_os_activity, OS_os_transaction, OS_dispatch_queue, OS_dispatch_source;

@interface _BRCOperation : NSOperation {
    unsigned char _operationUUID[16];
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_transaction> *_executionTransaction;
    NSDate *_finishDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subOperations;
    NSObject<OS_os_activity> *_Activity;
    NSMutableArray *_associatedEventMetrics;
    NSString *_personaID;
}

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) BOOL nonDiscretionary;
@property (readonly, nonatomic) NSUUID *operationID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double executionTimeInSec;
@property (readonly, nonatomic) BRCSyncContext *syncContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *highPriorityWaitGroup;
@property (retain, nonatomic) CKOperationGroup *group;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) struct { unsigned long long sectionID; char *function; int line; } logSections;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BRCThrottle *operationThrottle;
@property (nonatomic) BRCThrottle *operationFailureThrottle;
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (copy, nonatomic) id /* block */ mainBlock;
@property (copy, nonatomic) id /* block */ finishBlock;

- (void)main;
- (id)init;
- (void)schedule;
- (void)cancel;
- (void)start;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)isConcurrent;
- (void)cancelAfterDelay:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)addDependency:(id)a0;
- (void)_main;
- (BOOL)_finishIfCancelled;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (BOOL)finishIfCancelled;
- (void)_completedWithResult:(id)a0 error:(id)a1;
- (id)initWithName:(id)a0 syncContext:(id)a1 group:(id)a2;
- (void)_executeWithPreviousError:(id)a0;
- (void)_scheduleExecutionWithPreviousError:(id)a0;
- (void)_setDeviceConfigurationHeaderOnCKOp:(id)a0;
- (void)_setTelemetryHeaderOnCKOpIfNecessary:(id)a0;
- (void)addSubOperation:(id)a0;
- (void)addSubOperation:(id)a0 overrideContext:(id)a1 allowsCellularAccess:(id)a2;
- (void)associateCKOperationsToEventMetric:(id)a0;
- (void)blockOnHighPriorityOperation:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (id)initWithName:(id)a0 syncContext:(id)a1;
- (id)stateWithContext:(id)a0;
- (id)subclassableDescriptionWithContext:(id)a0;

@end
