@class NSXPCConnection;

@interface STDeviceCapabilitiesClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)isCapabilityEnabledForUser:(id)a0 capability:(id)a1 completionHandler:(id /* block */)a2;

@end
