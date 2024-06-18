@class NSString, NSError;

@interface _CNFailedFutureImpl : NSObject <CNFutureImpl> {
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDescriptionWithBuilder:(id)a0;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithError:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isCancelled;

@end
