@class NSSet, NSString, TRIRolloutDeployment, TRIExperimentDeployment, _PASLock;
@protocol TRIPaths;

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving> {
    id<TRIPaths> _paths;
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSSet *namespacesInFactorsState;
@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeploymentForFactorsState;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeploymentForFactorsState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredPathForFactorDataWithCandidatePaths:(id)a0;
+ (id)promotionDirForNamespaceName:(id)a0 withPaths:(id)a1;
+ (id)_namespacePathComponentsFromEntitlements;

- (id)init;
- (id)resolveFactorProviderChainForNamespaceName:(id)a0 faultOnMissingInstalledFactors:(BOOL)a1 installedFactorsAccessible:(BOOL *)a2;
- (id)initWithPaths:(id)a0 factorsState:(id)a1;
- (id)_resolverPropertyListWithResolvedPath:(id *)a0;
- (id)_getFactorPackPathForNamespaceName:(id)a0 withCandidatePath:(id)a1 parentId:(id)a2 deploymentId:(int)a3 promotable:(BOOL *)a4;
- (void)_faultOnceWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)_resolveTargetedFactorPackSetForRolloutDeployment:(id)a0;
- (BOOL)_hasExperimentFactorsState;
- (id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)a0;
- (id)_resolvePropertyListFactorProviderChainForNamespaceName:(id)a0;
- (BOOL)_prepareFactorsState:(id)a0;
- (id)initWithPaths:(id)a0;
- (id)_factorProviderForNamespaceName:(id)a0 parentId:(id)a1 deploymentId:(int)a2 fromFactorPackSetWithDir:(id)a3 resolvedPath:(id *)a4;
- (void)dispose;
- (id)_factorProviderForNamespaceName:(id)a0 fromNamespaceDescriptorSetWithDir:(id)a1 resolvedPath:(id *)a2;
- (void)dealloc;
- (BOOL)_hasRolloutFactorsState;

@end
