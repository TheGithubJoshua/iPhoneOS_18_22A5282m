@class NSString;

@interface VSAccountApplicationProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedDisplayName;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalizedDisplayName:(id)a0 identifier:(id)a1;

@end
