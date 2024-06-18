@class HDOriginalFHIRResourceObject, NSArray;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDOriginalFHIRResourceObject *originalFHIRResource;
@property (readonly, copy, nonatomic) NSArray *units;
@property (readonly, nonatomic) unsigned long long flags;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginalFHIRResource:(id)a0 units:(id)a1 flags:(unsigned long long)a2;

@end
