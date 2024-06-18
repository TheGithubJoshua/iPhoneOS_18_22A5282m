@class UIColor, NSString, UIImageView, SBHIconAccessoryCountedMapImageTuple, SBDarkeningImageView, SBFParallaxSettings, UITapGestureRecognizer;
@protocol SBIconListLayout;

@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {
    UIImageView *_incomingTextView;
    BOOL _displayingAccessory;
    SBHIconAccessoryCountedMapImageTuple *_textImageTuple;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_textView;
}

@property (class, readonly, nonatomic) UIColor *badgeBackgroundColor;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;

+ (id)_createImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (id)_checkoutImageForText:(id)a0 font:(id)a1 highlighted:(BOOL)a2;
+ (double)_textPadding;

- (struct CGPoint { double x0; double x1; })layoutOffset;
- (id)init;
- (void)_applyParallaxSettings;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_crossfadeToTextImage:(id)a0 animator:(id)a1;
- (void)_clearText;
- (BOOL)displayingAccessory;
- (double)badgeContentScale;
- (id)font;
- (void)_resizeForTextImage:(id)a0;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_zoomInWithTextImage:(id)a0 animator:(id)a1;
- (void)_layOutTextImageView:(id)a0;
- (void).cxx_destruct;
- (void)_configureAnimatedForText:(id)a0 highlighted:(BOOL)a1 animator:(id)a2;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)prepareForReuse;
- (void)_zoomOutWithAnimator:(id)a0;
- (struct CGSize { double x0; double x1; })badgeSize;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForTextImage:(id)a0;
- (void)setAccessoryBrightness:(double)a0;

@end
