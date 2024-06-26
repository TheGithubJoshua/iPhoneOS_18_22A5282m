@class NSString;

@interface _UIStatusBarDataActivityEntry : _UIStatusBarDataEntry

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayId;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_ui_descriptionBuilder;

@end
