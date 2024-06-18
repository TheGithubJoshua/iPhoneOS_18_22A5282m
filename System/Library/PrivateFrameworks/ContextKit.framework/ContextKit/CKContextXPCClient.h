@interface CKContextXPCClient : NSObject

+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (void)initialize;
+ (id)isXPCConnectionError:(id)a0;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)xpcConnection;
+ (void)invalidateXpcConnection;

@end
