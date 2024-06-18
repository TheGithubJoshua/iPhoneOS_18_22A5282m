@class NSObject;
@protocol OS_dispatch_queue, NFPowerObserverDelegate;

@interface NFPowerObserver : NSObject {
    id<NFPowerObserverDelegate> _delegate;
    unsigned int _powerNotificationConnection;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotificationNotifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    void *_sleepMessageArgument;
}

@property (readonly) BOOL willSleep;

- (id)initWithDelegate:(id)a0;
- (BOOL)registerForEvents;
- (void).cxx_destruct;
- (void)unregisterForEvents;
- (id)delegate;
- (void)_powerNotificationMessage:(unsigned int)a0 argument:(void *)a1;
- (void)dealloc;
- (void)allowSleep;

@end
