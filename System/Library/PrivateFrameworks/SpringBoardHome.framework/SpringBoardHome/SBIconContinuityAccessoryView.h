@class UITapGestureRecognizer, SBIconContinuityItem, NSString, SBHomeScreenMaterialView, SBFParallaxSettings, SBDarkeningImageView;
@protocol SBIconListLayout;

@interface SBIconContinuityAccessoryView : UIView <SBIconAccessoryView>

@property (readonly, nonatomic) SBDarkeningImageView *backgroundView;
@property (readonly, nonatomic) SBHomeScreenMaterialView *foregroundView;
@property (readonly, nonatomic) SBIconContinuityItem *continuityItem;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageForContinuityItem:(id)a0 highlighted:(BOOL)a1;

- (struct CGPoint { double x0; double x1; })layoutOffset;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setLegibilityStyle:(long long)a0;
- (BOOL)displayingAccessory;
- (double)badgeContentScale;
- (struct CGPoint { double x0; double x1; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForIcon:(id)a0 infoProvider:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)configureAnimatedForIcon:(id)a0 infoProvider:(id)a1 animator:(id)a2;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })badgeSize;
- (void)layoutSubviews;
- (void)setAccessoryBrightness:(double)a0;

@end
