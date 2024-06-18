@class UIVibrancyEffect, UIColor, UIImage, _UITabBarLayoutData, UITabBarItemAppearance;

@interface UITabBarAppearance : UIBarAppearance {
    _UITabBarLayoutData *_layoutData;
}

@property (copy, nonatomic, setter=_setSelectedItemVibrancyEffect:) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (copy, nonatomic) UITabBarItemAppearance *stackedLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *inlineLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *compactInlineLayoutAppearance;
@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long stackedItemPositioning;
@property (nonatomic) double stackedItemWidth;
@property (nonatomic) double stackedItemSpacing;

+ (BOOL)supportsSecureCoding;

- (void)_describeInto:(id)a0;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_inlineTabButtonAppearanceData;
- (id)_tabLayoutAppearanceData;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_copyFromAppearance:(id)a0;
- (void)_setupDefaults;
- (void)_completeInit;
- (void)_tabBarItemDataChanged:(id)a0;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)_dataForItemStyle:(long long)a0;
- (void)_decodeFromCoder:(id)a0;
- (id)_stackedTabButtonAppearanceData;
- (id)_compactInlineTabButtonAppearanceData;

@end
