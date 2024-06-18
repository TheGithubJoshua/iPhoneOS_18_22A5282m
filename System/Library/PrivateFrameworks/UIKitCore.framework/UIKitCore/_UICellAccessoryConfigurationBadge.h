@class NSString, UIFont;

@interface _UICellAccessoryConfigurationBadge : _UICellAccessoryConfiguration

@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_identifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0;

@end
