@class NSLock;

@interface AMSLazyPromise : AMSPromise

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL executedBlock;
@property (nonatomic) double timeout;

- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)_runBlock;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (id)initWithBlock:(id /* block */)a0;

@end
