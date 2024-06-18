@class NSXPCConnection;

@interface HDHAHealthAppPluginHostConnection : NSObject {
    NSXPCConnection *_connection;
    BOOL _resumed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (id)proxy;
- (void).cxx_destruct;
- (void)resumeIfNecessary;
- (id)synchronousProxy;
- (void)dealloc;

@end
