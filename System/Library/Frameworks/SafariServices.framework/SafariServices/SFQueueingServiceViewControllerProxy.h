@class NSMutableArray, Protocol;
@protocol SFQueueingServiceViewControllerProxyDelegate;

@interface SFQueueingServiceViewControllerProxy : NSProxy {
    NSMutableArray *_queuedInvocations;
    Protocol *_protocol;
}

@property (retain, nonatomic) id target;
@property (weak, nonatomic) id<SFQueueingServiceViewControllerProxyDelegate> delegate;

- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
