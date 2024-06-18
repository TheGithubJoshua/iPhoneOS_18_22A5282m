@interface NEProcessInfo : NSObject

+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (BOOL)is64bitCapable;
+ (void)clearUUIDCache;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyDNSUUIDs;

- (id)init;

@end
