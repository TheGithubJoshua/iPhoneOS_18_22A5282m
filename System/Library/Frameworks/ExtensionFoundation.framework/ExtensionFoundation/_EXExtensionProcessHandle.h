@class NSHashTable, RBSProcessIdentity, NSXPCListenerEndpoint, NSArray, _EXLaunchConfiguration, _EXInternalHostConnection, BKSProcessAssertion, _EXExtensionProcessMannger;

@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *sandboxExtensions;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } xpcConnectionLock;
@property (retain) NSHashTable *xpcConnections;
@property (weak) _EXExtensionProcessMannger *manager;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (retain) NSHashTable *observers;
@property (weak) _EXInternalHostConnection *internalConnection;
@property (readonly) _EXLaunchConfiguration *launchConfiguration;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (readonly) int pid;
@property (readonly) BKSProcessAssertion *assertion;
@property (readonly) RBSProcessIdentity *processIdentity;
@property (readonly, getter=isValid) BOOL valid;

- (id)initWithCoder:(id)a0;
- (void)removeObserver:(id)a0;
- (id)makeXPCConnectionRetainProcess:(BOOL)a0 withError:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (id)makeXPCConnection;
- (id)initWithLaunchConfiguration:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 processIdentity:(id)a2 sandboxExtensions:(id)a3;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_handleAssertionInvalidation;
- (id)makeSessionXPCConnection;
- (id)configuration;
- (id)aquireAsertionWithError:(id *)a0;

@end
