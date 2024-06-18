@class NSDictionary, Protocol;

@interface RTEntitlementProvider : NSObject

@property (retain, nonatomic) NSDictionary *entitlementsDictionary;
@property (readonly, nonatomic) Protocol *protocol;

+ (id)daemonProtocolEntitlementProvider;
+ (id)internalDaemonProtocolEntitlementProvider;
+ (id)selectorsForProtocol:(id)a0;
+ (id)helperServiceProtocolEntitlementProvider;

- (id)init;
- (BOOL)clientConnection:(id)a0 hasEntitlement:(id)a1;
- (BOOL)clientConnection:(id)a0 satisfiesEntitlementRequirementsForInvocation:(id)a1;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 entitlementsDictionary:(id)a1;

@end
