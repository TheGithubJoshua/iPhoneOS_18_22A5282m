@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (BOOL)isInternalProcess;
+ (BOOL)isSearchEnabledProcess;
+ (id)allowedEntitlements;

- (id)initWithEntitlements:(id)a0;
- (id)init;
- (BOOL)isInternal;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;

@end
