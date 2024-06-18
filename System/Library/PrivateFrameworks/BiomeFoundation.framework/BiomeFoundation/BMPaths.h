@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *localFlexibleStorageDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (void)unsetBasePathForTesting;
+ (BOOL)isTestPathOverridden;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (id)_biomeSystemDataDirectory;
+ (id)_pathForTesting;
+ (id)_userHome;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)_systemRoot;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)privacyURLToString:(id)a0;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (id)privacyPathname:(id)a0;

@end
