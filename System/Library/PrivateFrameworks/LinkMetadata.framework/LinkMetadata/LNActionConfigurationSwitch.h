@class NSString, NSArray;

@interface LNActionConfigurationSwitch : LNActionConfiguration <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSArray *cases;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParameterIdentifier:(id)a0 cases:(id)a1;

@end
