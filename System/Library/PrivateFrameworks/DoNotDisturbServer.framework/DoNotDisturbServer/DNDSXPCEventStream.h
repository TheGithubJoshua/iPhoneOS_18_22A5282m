@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSXPCEventStream : NSObject {
    NSMutableDictionary *_timerHandlersByToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)start;
- (void)registerTimerHandlerWithServiceIdentifier:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setTimer:(id)a0;

@end
