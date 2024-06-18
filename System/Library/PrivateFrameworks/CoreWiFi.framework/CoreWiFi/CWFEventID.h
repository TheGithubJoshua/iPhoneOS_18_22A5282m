@class NSString;

@interface CWFEventID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)eventIDWithType:(long long)a0 interfaceName:(id)a1;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToEventID:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
