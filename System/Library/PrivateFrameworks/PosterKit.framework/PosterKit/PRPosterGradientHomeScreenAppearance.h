@class PRPosterColor, PREditorColorPickerConfiguration, NSArray;

@interface PRPosterGradientHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, copy, nonatomic) PRPosterColor *color;
@property (readonly, copy, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveColor;
@property (readonly, copy, nonatomic) NSArray *gradientColors;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithColor:(id)a0 colorPickerConfiguration:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
