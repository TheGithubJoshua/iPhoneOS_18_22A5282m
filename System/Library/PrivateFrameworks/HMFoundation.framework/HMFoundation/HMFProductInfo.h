@class NSString, HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long productPlatform;
@property (readonly) long long productClass;
@property (readonly) long long productVariant;
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly, nonatomic) long long productColor;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (id)productInfo;
+ (id)shortDescription;
+ (void)encodeSoftwareVersion:(id)a0 withCoder:(id)a1;
+ (id)decodeSoftwareVersionWithCoder:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4 modelIdentifier:(id)a5;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2 modelIdentifier:(id)a3;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)privateDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3 color:(long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 variant:(long long)a2 softwareVersion:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithPlatform:(long long)a0 class:(long long)a1 softwareVersion:(id)a2;

@end
