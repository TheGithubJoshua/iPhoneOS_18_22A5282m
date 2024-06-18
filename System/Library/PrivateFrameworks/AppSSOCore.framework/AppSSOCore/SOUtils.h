@interface SOUtils : NSObject

+ (BOOL)isInternalBuild;
+ (id)mapArray:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)sandboxAllowsXPC:(const char *)a0;
+ (void)unmapFile:(int)a0 data:(id)a1;
+ (int)pidFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)teamIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)auditTokenFromData:(id)a0 auditToken:(struct { unsigned int x0[8]; } *)a1;
+ (BOOL)checkEntitlementFromXPC:(id)a0 entitlement:(id)a1;
+ (BOOL)isAppSSOServiceAvailable;
+ (id)signatureSetToString:(long long)a0;
+ (id)processNameForPID:(int)a0;
+ (BOOL)currentProcessIsSandboxed;
+ (BOOL)checkSignatureOfFile:(id)a0 teamIdentifier:(id *)a1 trusted:(BOOL *)a2 signedBySet:(long long *)a3 certificates:(id *)a4 error:(id *)a5;
+ (id)bundleIdentifierFromAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)currentProcessContainerPath;
+ (id)currentProcessName;
+ (int)mmapFile:(id)a0 mode:(long long)a1 mmapData:(id *)a2;

@end
