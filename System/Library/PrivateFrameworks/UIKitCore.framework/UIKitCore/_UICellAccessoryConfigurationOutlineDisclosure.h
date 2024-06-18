@class UIImage, UIColor;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration

@property (readonly, nonatomic) UIImage *_customImage;
@property (readonly, nonatomic) BOOL cellSelectionTogglesExpansionState;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double rotationAngle;
@property (retain, nonatomic) UIColor *selectedTintColor;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_identifier;
- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCellSelectionTogglesExpansionState:(BOOL)a0;

@end
