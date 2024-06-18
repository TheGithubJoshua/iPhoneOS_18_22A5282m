@class NSObject;
@protocol OS_dispatch_group;

@interface FigNSXPCConnection : NSXPCConnection {
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
}

@property (readonly, nonatomic) BOOL explicitlyInvalidated;

- (void)setInvalidationHandler:(id /* block */)a0;
- (void)invalidate;
- (void)resume;
- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (void)dealloc;

@end
