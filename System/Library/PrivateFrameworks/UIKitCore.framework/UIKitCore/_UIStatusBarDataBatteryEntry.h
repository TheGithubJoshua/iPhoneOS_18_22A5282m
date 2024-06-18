@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry

@property (nonatomic) long long capacity;
@property (nonatomic) long long state;
@property (nonatomic) BOOL saverModeActive;
@property (nonatomic) BOOL prominentlyShowsDetailString;
@property (copy, nonatomic) NSString *detailString;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_ui_descriptionBuilder;

@end
