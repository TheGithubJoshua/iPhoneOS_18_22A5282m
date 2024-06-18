@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;

+ (id)versionedNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToVersionedNamespace:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
