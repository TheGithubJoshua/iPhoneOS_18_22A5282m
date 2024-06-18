@class NSString;

@interface SRSupplementalCategory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)sr_dictionaryRepresentation;

@end
