@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)postClouddWalrusUpdateNotification;
- (void)addClouddThrottle:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)clearAllClouddThrottles;

@end
