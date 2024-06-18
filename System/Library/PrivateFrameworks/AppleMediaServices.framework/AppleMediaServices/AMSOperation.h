@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}

@property (weak, nonatomic) AMSOperation *parentOperation;
@property (readonly, nonatomic) AMSBinaryPromise *promise;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

- (void)main;
- (id)init;
- (void)cancel;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (BOOL)isCancelled;
- (void)run;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
