@interface SHCustomCatalogConfiguration : SHCatalogConfiguration

@property (nonatomic) long long algorithm;
@property (nonatomic) long long density;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
