@class NSObject;
@protocol OS_dispatch_queue;

@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_q;
    _Atomic BOOL _r;
}

@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (void)async:(id /* block */)a0;
- (id)init;
- (void)sync:(id /* block */)a0;
- (void)suspend;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (id)initWithName:(id)a0 attributes:(id)a1 target:(id)a2;

@end
