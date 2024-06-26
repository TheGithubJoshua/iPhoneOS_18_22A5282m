@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, SFProxCardXPCServerInterface;

@interface SFProxCardSessionServer : NSObject {
    BOOL _dismissCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) id<SFProxCardXPCServerInterface> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;

- (void)_reportError:(id)a0;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (void)performAction:(int)a0 completion:(id /* block */)a1;

@end
