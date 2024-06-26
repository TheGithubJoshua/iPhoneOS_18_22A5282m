@interface MAAutoAssetInfoStaged : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long totalStagedBytes;
@property (readonly, nonatomic) unsigned long long assetsSuccessfullyStaged;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithTotalStagedBytes:(long long)a0 withAssetsSuccessfullyStaged:(unsigned long long)a1;

@end
