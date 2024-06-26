@class UIColor, NSString, UITabBarButton, UIImage, _UITabBarItemAppearanceStorage, UITabBarAppearance;

@interface UITabBarItem : UIBarItem <_UIPopoverPresentationControllerSourceItem_Internal, _UIBarAppearanceChangeObserver> {
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageInsets;
    UIImage *_landscapeTemplateImage;
    UIImage *_landscapeSelectedTemplateImage;
    UIImage *_landscapeSelectedImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _landscapeImageInsets;
    UITabBarButton *_view;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    struct { unsigned char enabled : 1; unsigned char style : 3; unsigned char isSystemItem : 1; unsigned char systemItem : 7; unsigned char customSelectedImage : 1; unsigned char customUnselectedImage : 1; } _tabBarItemFlags;
    BOOL _springLoaded;
    struct UIOffset { double horizontal; double vertical; } _badgeOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=_setBarMetrics:) long long _barMetrics;
@property (nonatomic, setter=_setImageStyle:) long long _imageStyle;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) BOOL _selected;
@property (readonly, nonatomic) UIImage *_internalLandscapeSelectedImagePhone;
@property (nonatomic, setter=_setUsesModernAppearance:) BOOL _usesModernAppearance;
@property (retain, nonatomic) UIImage *landscapeSelectedImagePhone;
@property (nonatomic) struct UIOffset { double x0; double x1; } badgeOffset;
@property (nonatomic) struct UIOffset { double x0; double x1; } landscapePhoneBadgeOffset;
@property (retain, nonatomic) UIImage *selectedImage;
@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) UIColor *badgeColor;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance;
@property (copy, nonatomic) UITabBarAppearance *scrollEdgeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_appearanceBlindViewClasses;

- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)view;
- (id)target;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (void)setBadgeTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)image;
- (SEL)action;
- (BOOL)isEnabled;
- (id)badgeTextAttributesForState:(unsigned long long)a0;
- (void)_updateView;
- (void)setAction:(SEL)a0;
- (BOOL)hasTitle;
- (void)setImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSpringLoaded:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isSpringLoaded;
- (void)setTarget:(id)a0;
- (void)setView:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (long long)systemItem;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)unselectedImage;
- (id)_internalLandscapeTemplateImage;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_createViewForTabBar:(id)a0 asProxyView:(BOOL)a1;
- (id)_internalLandscapeTemplateImages;
- (id)_internalLargeContentSizeImage;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTemplateImagesForTabBarDisplayStyle:(long long)a0;
- (id)_internalTitle;
- (id)_internalTitleForTabBarDisplayStyle:(long long)a0;
- (void)_setInternalLandscapeTemplateImage:(id)a0;
- (void)_setInternalTemplateImage:(id)a0;
- (void)_setInternalTitle:(id)a0;
- (void)_setTitleTextAttributeValue:(id)a0 forAttributeKey:(id)a1 state:(unsigned long long)a2;
- (void)_showSelectedIndicator:(BOOL)a0 changeSelection:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectForPresentationInWindow:(id)a0;
- (id)_sourceViewForPresentationInWindow:(id)a0;
- (void)_updateToMatchCurrentState;
- (void)_updateViewAndPositionItems:(BOOL)a0;
- (void)_updateViewBadge;
- (BOOL)animatedBadge;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (id)initWithTabBarSystemItem:(long long)a0 tag:(long long)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2;
- (id)initWithTitle:(id)a0 image:(id)a1 tag:(long long)a2;
- (BOOL)isSystemItem;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })landscapeImagePhoneInsets;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })largeContentSizeImageInsets;
- (id)resolvedTitle;
- (void)setAnimatedBadge:(BOOL)a0;
- (void)setFinishedSelectedImage:(id)a0 withFinishedUnselectedImage:(id)a1;
- (void)setLandscapeImagePhone:(id)a0;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setLargeContentSizeImage:(id)a0;
- (void)setUnselectedImage:(id)a0;

@end
