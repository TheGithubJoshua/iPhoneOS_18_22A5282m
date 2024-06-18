@class CPLEngineTransientRepository;

@interface CPLTransientRepositoryStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository;

- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (void).cxx_destruct;
- (id)storageDescription;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)initWithTransientRepository:(id)a0;

@end
