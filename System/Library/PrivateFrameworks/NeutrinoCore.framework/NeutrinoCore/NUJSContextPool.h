@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJSContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

@property (class, readonly) NUJSContextPool *sharedContextPool;

- (id)init;
- (void)_returnContext:(id)a0;
- (void)returnContext:(id)a0;
- (void).cxx_destruct;
- (id)newContext;
- (id)_newContext;

@end
