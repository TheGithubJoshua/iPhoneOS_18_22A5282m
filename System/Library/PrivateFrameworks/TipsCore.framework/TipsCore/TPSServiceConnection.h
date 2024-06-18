@class NSString, _TPSXPCConnection, NSXPCInterface;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {
    _TPSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)connection;
- (id)remoteInterface;
- (void)invalidate;
- (void).cxx_destruct;
- (id)exportedInterface;

@end
