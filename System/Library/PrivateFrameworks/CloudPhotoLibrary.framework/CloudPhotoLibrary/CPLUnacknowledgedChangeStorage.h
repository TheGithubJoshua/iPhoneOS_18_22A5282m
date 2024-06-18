@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store;

- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)storageDescription;
- (id)changeWithScopedIdentifier:(id)a0;

@end
