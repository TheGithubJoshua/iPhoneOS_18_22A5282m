@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (id)allStorageVolumes;
- (BOOL)getVolume:(int *)a0 forPath:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)registerActivity;
- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;

@end
