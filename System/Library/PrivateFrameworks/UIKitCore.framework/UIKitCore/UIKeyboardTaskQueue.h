@class UIKeyboardTaskEntry, NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskEntry *_mainThreadContinuation;
}

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;
@property (retain, nonatomic) NSArray *activeOriginator;

- (id)init;
- (BOOL)isMainThreadExecutingTask;
- (void)performSingleTask:(id /* block */)a0;
- (id)scheduleTask:(id /* block */)a0 timeInterval:(double)a1 repeats:(BOOL)a2;
- (void)waitUntilAllTasksAreFinished;
- (void)addTask:(id /* block */)a0;
- (BOOL)isEmpty;
- (id)addAndReturnTask:(id /* block */)a0;
- (void)performDeferredTaskIfIdle;
- (void)unlock;
- (void)finishExecution;
- (void)performTaskOnMainThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)performTask:(id /* block */)a0;
- (void)promoteDeferredTaskIfIdle;
- (void).cxx_destruct;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)waitUntilTaskIsFinished:(id)a0;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)continueExecutionOnMainThread;
- (void)addDeferredTask:(id /* block */)a0;

@end
