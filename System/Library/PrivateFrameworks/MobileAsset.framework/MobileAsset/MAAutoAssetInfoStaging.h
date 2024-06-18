@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithAvailableForStaging:(id)a0 withTotalExpectedBytes:(unsigned long long)a1;

@end
