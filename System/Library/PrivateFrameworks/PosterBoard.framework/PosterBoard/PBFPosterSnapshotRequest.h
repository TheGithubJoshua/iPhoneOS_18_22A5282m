@class NSString, NSArray, PRPosterConfiguredProperties, PRSServerPosterPath;

@interface PBFPosterSnapshotRequest : NSObject {
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) PRSServerPosterPath *path;
@property (readonly, nonatomic) BOOL loadFromCacheIfAvailable;
@property (readonly, nonatomic) NSString *provider;
@property (nonatomic) unsigned long long intention;
@property (nonatomic) long long powerLogReason;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *previewIdentifier;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, nonatomic) NSArray *definitions;

+ (id)snapshotRequestForConfiguration:(id)a0 compatibleWithTraitCollection:(id)a1 definitions:(id)a2;
+ (id)snapshotRequestForPreview:(id)a0;
+ (id)snapshotRequestForConfiguration:(id)a0 compatibleWithTraitCollection:(id)a1 definitions:(id)a2 loadFromCacheIfAvailable:(BOOL)a3;
+ (id)snapshotRequestForConfiguration:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)snapshotRequestForConfiguration:(id)a0;
+ (id)snapshotRequestForConfiguration:(id)a0 withinSwitcherConfiguration:(id)a1 variant:(long long)a2 compatibleWithTraitCollection:(id)a3 snapshotDefinitions:(id)a4;
+ (id)snapshotRequestForPath:(id)a0 configuredProperties:(id)a1;
+ (id)snapshotRequestForConfiguration:(id)a0 compatibleWithTraitCollection:(id)a1 loadFromCacheIfAvailable:(BOOL)a2;
+ (id)snapshotRequestForPreview:(id)a0 loadFromCacheIfAvailable:(BOOL)a1;

- (BOOL)_isEqualToRequest:(id)a0 allowingOtherDefinitionsAreSubset:(BOOL)a1;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithIdentifier:(id)a0 path:(id)a1 configuredProperties:(id)a2 definitions:(id)a3 loadFromCacheIfAvailable:(BOOL)a4 previewIdentifier:(id)a5;
- (unsigned long long)hash;
- (BOOL)containsRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 definitions:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 descriptor:(id)a1 configuredProperties:(id)a2 definitions:(id)a3;

@end
