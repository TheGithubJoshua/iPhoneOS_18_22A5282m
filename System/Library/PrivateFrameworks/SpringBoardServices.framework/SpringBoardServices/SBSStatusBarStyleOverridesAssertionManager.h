@class NSMapTable, NSXPCConnection, NSMutableDictionary, SBSStatusBarStyleOverridesCoordinator, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient>

@property (retain, nonatomic) NSMapTable *assertionsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier;
@property (retain, nonatomic) NSXPCConnection *sbXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)a0 invalidate:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addStatusBarStyleOverridesAssertion:(id)a0 withHandler:(id /* block */)a1 onQueue:(id)a2;
- (id)succinctDescription;
- (void)unregisterCoordinator;
- (void)_handleXPCConnectionInvalidation;
- (void).cxx_destruct;
- (void)updateStatusStringForAssertion:(id)a0;
- (void)statusBarTappedWithContext:(id)a0 reply:(id /* block */)a1;
- (id)succinctDescriptionBuilder;
- (void)_reactivateAssertions;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeStatusBarStyleOverridesAssertion:(id)a0;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;

@end
