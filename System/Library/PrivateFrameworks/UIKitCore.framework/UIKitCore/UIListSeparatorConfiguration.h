@class UIColor, UIVisualEffect;

@interface UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_ignoreBottomSeparatorInsetsFromCell, setter=_setIgnoreBottomSeparatorInsetsFromCell:) BOOL _ignoreBottomSeparatorInsetsFromCell;
@property (nonatomic, getter=_ignoreTopSeparatorInsetsFromCell, setter=_setIgnoreTopSeparatorInsetsFromCell:) BOOL _ignoreTopSeparatorInsetsFromCell;
@property (copy, nonatomic, getter=_visualEffect, setter=_setVisualEffect:) UIVisualEffect *_visualEffect;
@property (nonatomic) long long topSeparatorVisibility;
@property (nonatomic) long long bottomSeparatorVisibility;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } topSeparatorInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } bottomSeparatorInsets;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *multipleSelectionColor;
@property (copy, nonatomic) UIVisualEffect *visualEffect;

+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceInsetGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearancePlain;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebar;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebarPlain;

- (id)initWithCoder:(id)a0;
- (void)_setInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setColor:(id)a0;
- (id)_multipleSelectionColor;
- (unsigned long long)hash;
- (id)_color;
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_insets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithListAppearance:(long long)a0;
- (id)__copyWithSubclass:(Class)a0 inZone:(struct _NSZone { } *)a1;
- (id)_multiselectSeparatorColorForListAppearance:(long long)a0;
- (void)_setMultipleSelectionColor:(id)a0;

@end
