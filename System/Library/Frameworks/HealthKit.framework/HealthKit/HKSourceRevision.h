@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HKSource *source;
@property (readonly) NSString *version;
@property (readonly, copy) NSString *productType;
@property (readonly) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)asJSONObject;
- (id)_init;
- (unsigned long long)hash;
- (id)_initWithSource:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_setSource:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setVersion:(id)a0;
- (id)initWithSource:(id)a0 version:(id)a1;
- (id)initWithSource:(id)a0 version:(id)a1 productType:(id)a2 operatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a3;

@end
