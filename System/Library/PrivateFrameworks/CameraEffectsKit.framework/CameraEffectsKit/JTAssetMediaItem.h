@class NSString, PHAsset, NSURL;

@interface JTAssetMediaItem : JTLocalAssetMediaItem

@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *masterFingerprint;
@property (copy, nonatomic) NSString *adjustedFingerprint;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSURL *assetLocalURL;

- (id)init;
- (id)info;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithAssetIdentifier:(id)a0;
- (void)checkIfAssetIsMissing;
- (void)fetchAssetForce:(BOOL)a0;
- (id)initWithInfo:(id)a0 delegate:(id)a1;
- (void)reloadAsset;

@end
