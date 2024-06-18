@class MCMUserIdentity, MCMPOSIXUser, NSURL;
@protocol MCMClientCodeSignInfo;

@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying>

@property (readonly, nonatomic) int posixPID;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) struct { unsigned int val[8]; } realAuditToken;
@property (readonly, nonatomic) struct { unsigned int val[8]; } effectiveAuditToken;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic, getter=isKernel) BOOL kernel;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) NSURL *sandboxContainerURL;
@property (readonly, nonatomic) id<MCMClientCodeSignInfo> codeSignInfo;
@property (readonly, nonatomic) BOOL cached;

+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)a0;
+ (id)privilegedClientIdentityWithUserIdentity:(id)a0 kernel:(BOOL)a1;

- (BOOL)isAllowedToAccessInfoMetadata;
- (id)init;
- (struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)createLibsystemClient;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToTest;
- (id)initInternal;
- (id)shortDescription;
- (BOOL)isAllowedToReadReferences;
- (BOOL)needsSandboxExtensionForContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (id)initWithPOSIXUser:(id)a0 POSIXPID:(int)a1 platform:(unsigned int)a2 userIdentity:(id)a3 effectiveAuditToken:(struct { unsigned int x0[8]; })a4 realAuditToken:(struct { unsigned int x0[8]; })a5 codeSignInfo:(id)a6 sandboxed:(BOOL)a7 sandboxContainerURL:(id)a8 kernel:(BOOL)a9;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char *)issueSandboxExtensionWithMetadata:(id)a0 forceIssue:(BOOL)a1 error:(unsigned long long *)a2;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToAccessCodesignMapping;
- (id)clientIdentityByChangingCached:(BOOL)a0;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToRestoreContainer;

@end
