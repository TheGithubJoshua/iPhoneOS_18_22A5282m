@class HMFPromise;

@interface HMFAsyncFuture : HMFFuture {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _state;
    HMFPromise *_promise;
    id _value;
}

- (struct _HMFFutureBlockOutcome { long long x0; id x1; })outcomeIfSettled;
- (id)then:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (id)inContext:(id)a0 then:(id /* block */)a1 orRecover:(id /* block */)a2;
- (void)getResultWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)inContext:(id)a0 then:(id /* block */)a1;
- (id)then:(id /* block */)a0 orRecover:(id /* block */)a1;
- (BOOL)isPending;
- (id)inContext:(id)a0 recover:(id /* block */)a1;

@end
