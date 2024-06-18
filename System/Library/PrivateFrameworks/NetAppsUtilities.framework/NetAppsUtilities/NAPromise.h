@class NSString, NAFuture;

@interface NAPromise : NSObject <NAPromise>

@property (readonly) NAFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapter;
- (void).cxx_destruct;
- (id)initWithFuture:(id)a0;
- (BOOL)finishWithError:(id)a0;

@end
