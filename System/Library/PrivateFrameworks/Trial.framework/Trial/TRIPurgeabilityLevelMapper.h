@protocol TRIClientNamespaceMetadataStoring, TRIPaths;

@interface TRIPurgeabilityLevelMapper : NSObject {
    id<TRIPaths> _paths;
    id<TRIClientNamespaceMetadataStoring> _namespaceMetadataStorage;
}

+ (id)purgeabilityLevelFromCacheDeleteUrgency:(int)a0;
+ (int)availableSpaceClassFromPurgeabilityLevel:(int)a0;

- (id)initWithPaths:(id)a0 namespaceMetadataStorage:(id)a1;
- (int)availableSpaceClassForFactorNames:(id)a0 namespaceName:(id)a1;
- (void).cxx_destruct;
- (int)purgeabilityLevelForNamespace:(id)a0;

@end
