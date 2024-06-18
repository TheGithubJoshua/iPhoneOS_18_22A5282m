@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsWithDictionary:(id)a0;
+ (id)_allowedEntitlementsSet;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;

- (BOOL)hasPrivateMetadataAccess;
- (id)init;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)_typesFromIdentifierArray:(id)a0;
- (id)typesForWriteAuthorizationOverride;
- (BOOL)hasAccessEntitlementWithIdentifer:(id)a0;
- (id)applicationIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithEntitlementValues:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (id)typesForReadAuthorizationBypass;
- (id)stringForEntitlement:(id)a0;
- (BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (id)typesForReadAuthorizationOverride;

@end
