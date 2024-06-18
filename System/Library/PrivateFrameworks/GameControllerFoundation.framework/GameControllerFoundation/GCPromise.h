@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)future;
- (id)init;
- (void)failWithError:(id)a0;
- (id)redactedDescription;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)succeedWithResult:(id)a0;

@end
