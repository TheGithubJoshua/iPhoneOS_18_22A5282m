@class NSUUID;

@interface HKUserDomainConceptLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *targetUUID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConcept:(id)a0 type:(long long)a1;
- (id)initWithTarget:(id)a0 type:(long long)a1;

@end
