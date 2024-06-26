@class NSString, NSSet, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIFactorPackId;

@interface TRIFPNamespaceFactorProvider : NSObject <TRINamespaceFactorProviding> {
    NSString *_parentId;
    int _deploymentId;
    NSString *_namespaceName;
    NSSet *_namespaceCompatibilityVersions;
    NSString<TRIFactorPackId> *_factorPackId;
    id<TRIFactorLevelCaching> _factorLevels;
    TRIReferenceManagedDirReaderLock *_dirLock;
    NSString *_lockingClientIdentifier;
}

@property (readonly, nonatomic) BOOL promotable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)treatmentId;
- (id)experimentId;
- (int)deploymentId;
- (id)namespaceName;
- (id)init;
- (id)_factorLevelsWithFactorPackData:(id)a0 referencePath:(id)a1 outFactorPackId:(id *)a2 outNamespaceName:(id *)a3 outNCVs:(id *)a4;
- (id)rolloutId;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (void).cxx_destruct;
- (void)dispose;
- (id)factorLevels;
- (id)initWithPath:(id)a0 parentId:(id)a1 deploymentId:(int)a2 promotable:(BOOL)a3;
- (void)dealloc;
- (id)levelForFactor:(id)a0;
- (id)initWithParentId:(id)a0 deploymentId:(int)a1 promotable:(BOOL)a2;

@end
