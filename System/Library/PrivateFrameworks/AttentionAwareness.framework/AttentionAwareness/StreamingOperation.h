@class NSObject;
@protocol OS_dispatch_queue;

@interface StreamingOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setSmartCoverState:(BOOL)a0;
- (BOOL)isStreamerRunning;
- (void).cxx_destruct;
- (union { })getStreamerOptions;
- (id)cancelEventStream;
- (id)streamEventWithBlock:(id /* block */)a0 options:(union { })a1;
- (void)setNotificationHandler:(id /* block */)a0;
- (id)initForUnitTest:(BOOL)a0 withQueue:(id)a1;

@end
