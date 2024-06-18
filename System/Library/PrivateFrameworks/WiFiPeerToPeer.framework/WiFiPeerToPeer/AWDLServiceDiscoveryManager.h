@class NSString, _AWDLServiceDiscoveryManagerExportedObject, NSXPCConnection, NSLock, NSMutableArray;

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSLock *_lock;
    _AWDLServiceDiscoveryManagerExportedObject *_exportedObject;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connectionInvalidated;
- (void)_removeFirstTrafficRegistrationMatching:(id)a0;
- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)queryAirPlayConnectivityWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)_usingAWDLDiscoveryManagerProxy:(id /* block */)a0 onSuccess:(id /* block */)a1 error:(id *)a2;
- (BOOL)_requiresConnection;
- (BOOL)suspendAWDLWithError:(id *)a0;
- (BOOL)resumeAWDLWithError:(id *)a0;
- (void)_retryConnection;
- (void).cxx_destruct;
- (void)_destroyConnection;
- (void)invalidatedActiveTrafficRegistration:(id)a0;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
