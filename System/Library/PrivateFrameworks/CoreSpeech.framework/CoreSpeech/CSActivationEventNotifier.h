@class NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedNotifier;

- (id)init;
- (void)notifyActivationEvent:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEventSynchronously:(id)a0 completion:(id /* block */)a1;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (id)_createXPCClientConnection;

@end
