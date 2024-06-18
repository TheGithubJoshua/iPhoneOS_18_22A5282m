@class MAAsset, NSString;

@interface WCAAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long latestInstalledVersion;
@property (retain, nonatomic) MAAsset *latestInstalledAsset;
@property unsigned long long installedAssetVersion;
@property unsigned long long latestNotInstalledVersion;
@property (retain, nonatomic) MAAsset *latestNotInstalledAsset;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *extension;

+ (id)beaconsDataAsset;
+ (id)wifiBehaviorPlistAsset;
+ (id)assetWithName:(id)a0 andExtension:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
