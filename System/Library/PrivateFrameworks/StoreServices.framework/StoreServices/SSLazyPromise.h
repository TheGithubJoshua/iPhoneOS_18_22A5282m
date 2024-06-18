@class NSLock;

@interface SSLazyPromise : SSPromise

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSLock *executeBlockLock;
@property (nonatomic) BOOL executedBlock;

- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)_runBlock;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (void)addErrorBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
