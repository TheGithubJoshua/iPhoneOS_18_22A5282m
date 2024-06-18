@interface MAAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long patchedAssets;
@property (nonatomic) long long patchedBytes;
@property (nonatomic) long long fullAssets;
@property (nonatomic) long long fullBytes;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithInitialValue:(long long)a0;

@end
