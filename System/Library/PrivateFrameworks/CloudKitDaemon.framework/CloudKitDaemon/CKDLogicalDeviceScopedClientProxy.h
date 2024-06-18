@class CKDXPCConnection, CKDLogicalDeviceContext;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject

@property (nonatomic) int pid;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator;
@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property BOOL hasBeenThrottled;

- (void)tearDown;
- (id)initWithClientConnection:(id)a0 deviceContext:(id)a1;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetThrottles;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (void)addThrottle:(id)a0;
- (id)openFileWithOpenInfo:(id)a0 error:(id *)a1;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (BOOL)processIsAttached;
- (void)getLogicalDeviceScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;

@end
