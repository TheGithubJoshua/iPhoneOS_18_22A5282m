@class UIVibrancyEffect, NSArray, UIBlurEffect, UIColor, UIImage, _UIBarBackgroundAppearanceData;
@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    id<_UIBarAppearanceChangeObserver> _changeObserver;
    _UIBarBackgroundAppearanceData *_backgroundData;
    long long _batchedChanges;
    BOOL _batchingChanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTransparentBackground;
@property (copy, nonatomic, setter=_setSelectedItemVibrancyEffect:) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

- (id)initWithCoder:(id)a0;
- (id)_doneButtonAppearanceData;
- (id)init;
- (id)_backButtonAppearanceData;
- (void)_describeInto:(id)a0;
- (void)configureWithTransparentBackground;
- (id)_backgroundData;
- (void)configureWithoutShadow;
- (id)copy;
- (BOOL)_checkEqualTo:(id)a0;
- (void)configureWithOpaqueBackground;
- (id)_plainButtonAppearanceData;
- (id)initWithIdiom:(long long)a0;
- (unsigned long long)hash;
- (id)_inlineTabButtonAppearanceData;
- (void)configureWithDefaultShadow;
- (id)_tabLayoutAppearanceData;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_copyFromAppearance:(id)a0;
- (void)_setupDefaults;
- (void)_completeInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureWithDefaultBackground;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)initWithBarAppearance:(id)a0;
- (id)_plainButtonAppearance;
- (void)_decodeFromCoder:(id)a0;
- (id)_barTitleData;
- (id)_backButtonAppearance;
- (id)_stackedTabButtonAppearanceData;
- (id)_compactInlineTabButtonAppearanceData;
- (id)_doneButtonAppearance;

@end
