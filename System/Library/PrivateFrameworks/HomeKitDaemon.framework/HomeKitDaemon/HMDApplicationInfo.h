@class NSString, NSData, NSURL, NSArray, NSHashTable;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_processes;
}

@property (class, readonly) NSData *privateVendorIdentifier;

@property (readonly, copy) NSData *vendorIdentifier;
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, getter=isIndependent) BOOL independent;
@property (readonly) HMDApplicationInfo *companionApplicationInfo;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (readonly, copy) NSArray *processes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)applicationInfoForBundleIdentifier:(id)a0;
+ (id)applicationInfoForBundleURL:(id)a0;

- (void)removeProcess:(id)a0;
- (id)init;
- (id)logIdentifier;
- (id)shortDescription;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;
- (id)attributeDescriptions;
- (id)clientIdentifierSalt:(id *)a0;

@end
