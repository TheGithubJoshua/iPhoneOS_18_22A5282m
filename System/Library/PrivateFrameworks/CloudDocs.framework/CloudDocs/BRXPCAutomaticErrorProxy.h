@class NSFileProviderService, NSXPCConnection;

@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy <BRXPCAutomaticErrorProxy> {
    NSXPCConnection *_connection;
    NSFileProviderService *_service;
}

@property unsigned long long timeoutState;

+ (void)incrementConnectionRefCount:(id)a0;
+ (void)decrementConnectionRefCount:(id)a0;
+ (BOOL)sanitizeErrors;

- (id)initWithConnection:(id)a0 service:(id)a1 interface:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
