@class NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_os_log;

@interface GCIPCRemoteConnection : NSObject <GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) struct { unsigned int x0[8]; } peerAuditToken;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) NSString *peerBundleIdentifier;

- (id)init;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (void)suspend;
- (id)redactedDescription;
- (id)initWithConnection:(id)a0;
- (unsigned long long)hash;
- (id)addInterruptionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)resume;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (id)addInvalidationHandler:(id /* block */)a0;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (BOOL)isEqualToConnection:(id)a0;
- (id)peerValueForEntitlement:(id)a0;

@end
