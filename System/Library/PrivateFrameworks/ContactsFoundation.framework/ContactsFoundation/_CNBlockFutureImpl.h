@class NSString, NSConditionLock, CNSuspendableSchedulerDecorator, CNFutureResult;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNFutureResult *_futureResult;
    BOOL _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) BOOL workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (BOOL)nts_isFinished;
- (id)init;
- (void)resumeQueue;
- (void)nts_resumeQueue;
- (id)initWithSchedulerProvider:(id)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (BOOL)_nts_isFinished;
- (void)_flushCompletionBlocks;
- (id)futureResult;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)implicitlyResumeQueue;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addFailureBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)futureResultFromImmediateLookup;
- (BOOL)isFinished;
- (void)dealloc;
- (void)addWriterBlock:(id /* block */)a0;
- (BOOL)nts_mayResumeQueue;
- (BOOL)isCancelled;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;

@end
