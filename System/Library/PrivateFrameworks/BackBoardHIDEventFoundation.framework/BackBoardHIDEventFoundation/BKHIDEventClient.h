@class NSString, BSMachPortSendRight, BSProcessDeathWatcher, NSObject, BSPortDeathSentinel;
@protocol OS_dispatch_queue, BKHIDEventClientDelegate;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    id<BKHIDEventClientDelegate> _queue_delegate;
    BSProcessDeathWatcher *_queue_pidWatcher;
    BSPortDeathSentinel *_queue_portSentinel;
    NSString *_queue_procName;
    BOOL _queue_invalidated;
}

@property (weak, nonatomic) id<BKHIDEventClientDelegate> delegate;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSMachPortSendRight *sendRight;
@property (nonatomic, getter=isTerminating) BOOL terminating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPid:(int)a0 sendRight:(id)a1;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_deathBySendRight;
- (id)initWithPid:(int)a0 sendRight:(id)a1 queue:(id)a2;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithPid:(int)a0 sendRight:(id)a1 queue:(id)a2 processName:(id)a3;
- (void)_queue_performDelegateCallout:(id /* block */)a0;
- (BOOL)_deathByPid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_queue_invalidate;

@end
