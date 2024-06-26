@class INCDisplayLayoutMonitorObserver, INIntent, NSObject, INCExtensionTransaction, INWatchdogTimer, NSString, INCAppProxy, NSXPCListener, NSArray, FBSDisplayLayoutMonitor, NSXPCConnection, NSXPCInterface, RBSAssertion;
@protocol OS_dispatch_queue, INIntentBackgroundHandlingAssertion;

@interface INCExtensionConnection : NSObject <NSXPCListenerDelegate, INXPCListenerEndpointProvider> {
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    INCDisplayLayoutMonitorObserver *_layoutObserver;
    INWatchdogTimer *_requestTimer;
    id<INIntentBackgroundHandlingAssertion> _backgroundHandlingAssertion;
    RBSAssertion *_processAssertion;
}

@property (nonatomic, setter=_setShouldObserveLayout:) BOOL _shouldObserveLayout;
@property (copy, nonatomic) id /* block */ remoteExtensionProxyProvider;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic, setter=setXPCInterface:) NSXPCInterface *xpcInterface;
@property (retain, nonatomic, setter=setXPCConnection:) NSXPCConnection *xpcConnection;
@property (retain, nonatomic, setter=setXPCObject:) id xpcObject;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, nonatomic) INCExtensionTransaction *_transaction;
@property (readonly, nonatomic) INCAppProxy *appProxy;
@property (readonly, nonatomic) long long supportedExtensionTypes;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) NSArray *extensionInputItems;
@property (nonatomic) double requestTimeoutInterval;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (nonatomic) BOOL requiresTCC;
@property (copy, nonatomic) id /* block */ appHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_takeAssertionsForIntent:(id)a0 extensionBundleIdentifier:(id)a1 processIdentifier:(int)a2;
- (BOOL)_cancelRequestTimer;
- (void)_startRequestTimerWithExtensionProxy:(id)a0;
- (id)initWithIntent:(id)a0 supportedExtensionTypes:(long long)a1 remoteProxyProvider:(id /* block */)a2;
- (void)_invalidateDisplayLayoutMonitor;
- (id)initWithIntent:(id)a0;
- (id)initWithIntent:(id)a0 supportedExtensionTypes:(long long)a1 donateInteraction:(BOOL)a2 groupIdentifier:(id)a3 remoteProxyProvider:(id /* block */)a4;
- (void)_invalidateInUseAssertion;
- (id)xpcListenerEndpointWithInterface:(id)a0 object:(id)a1;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 remoteProxyProvider:(id /* block */)a1;
- (void)_takeInUseAssertionForIntent:(id)a0 extensionBundleIdentifier:(id)a1;
- (void)_invalidateRunningBoardAssertion;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (double)_timeoutIntervalForTransactionState:(id)a0;
- (void)_invalidateAssertions;
- (void)_takeRunningBoardAssertionForProcessIdentifier:(int)a0;
- (void)reset;
- (void)resumeWithCompletionHandler:(id /* block */)a0;

@end
