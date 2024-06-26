@class NSString, UIImage;

@interface UIBarItem : NSObject <NSCoding, UIAppearance>

@property (nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;
@property (nonatomic, setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags;
@property (readonly, copy, nonatomic) NSString *resolvedTitle;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *landscapeImagePhone;
@property (retain, nonatomic) UIImage *largeContentSizeImage;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } landscapeImagePhoneInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } largeContentSizeImageInsets;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appearance;
+ (id)appearanceForTraitCollection:(id)a0 whenContainedInInstancesOfClasses:(id)a1;
+ (id)_appearanceBlindViewClasses;
+ (id)_appearanceWhenContainedIn:(id)a0;
+ (id)appearanceForTraitCollection:(id)a0;
+ (id)appearanceForTraitCollection:(id)a0 whenContainedIn:(Class)a1;
+ (id)appearanceWhenContainedIn:(Class)a0;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)_attributedTitleForState:(unsigned long long)a0 withDefaultAttributes:(id)a1;

@end
