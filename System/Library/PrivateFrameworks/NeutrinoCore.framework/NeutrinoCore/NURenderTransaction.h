@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject {
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (void)setCurrentTransaction:(id)a0;
+ (id)currentTransaction;
+ (void)commit;
+ (void)begin;
+ (void)commitAndNotifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (void)_commit:(id)a0;
+ (id)assertCurrentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)group:(id /* block */)a0;
+ (void)withCurrentTransaction:(id /* block */)a0;

- (id)init;
- (BOOL)commit;
- (void)flush;
- (BOOL)begin;
- (void).cxx_destruct;
- (void)submitRequest:(id)a0;
- (void)notifyCompletion:(id)a0 block:(id /* block */)a1;
- (void)resetPendingRequests;
- (void)submitPendingRequests;

@end
