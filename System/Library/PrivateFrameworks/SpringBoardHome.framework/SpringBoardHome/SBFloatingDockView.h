@class SBDockIconListView, SBFloatingDockPlatterView, UIView, SBIconView;
@protocol SBFloatingDockViewDelegate;

@interface SBFloatingDockView : SBFTouchPassThroughView

@property (class, readonly, nonatomic) double minimumPlatterMargin;

@property (retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIView *touchReceivingView;
@property (nonatomic) double iconContentScale;
@property (weak, nonatomic) id<SBFloatingDockViewDelegate> delegate;
@property (readonly, nonatomic) double maximumDockContinuousCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumIconSize;
@property (readonly, nonatomic) double maximumPlatterHeight;
@property (readonly, nonatomic) double maximumInterIconSpacing;
@property (retain, nonatomic) SBDockIconListView *userIconListView;
@property (retain, nonatomic) SBDockIconListView *recentIconListView;
@property (retain, nonatomic) SBIconView *accessoryIconView;
@property (nonatomic, getter=isAccessoryIconViewVisible) BOOL accessoryIconViewVisible;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingEdgeInsets;
@property (nonatomic) double platterVerticalMargin;
@property (nonatomic) unsigned long long minimumUserIconSpaces;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) struct CGSize { double width; double height; } maximumEditingIconSize;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) double interIconSpacing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } platterFrame;
@property (nonatomic) BOOL hasPlatterShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } platterShadowOutsets;

+ (double)_referenceInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)contentHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mainPlatterViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)getMetrics:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; double x6; double x7; } *)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutScale:(double)a2 numberOfUserIcons:(unsigned long long)a3 numberOfRecentIcons:(unsigned long long)a4 displayAccessoryIconView:(BOOL)a5 paddingEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6 referenceIconSize:(struct CGSize { double x0; double x1; })a7 maximumIconSize:(struct CGSize { double x0; double x1; })a8 referenceInterIconSpacing:(double)a9 maximumInterIconSpacing:(double)a10 platterVerticalMargin:(double)a11 editing:(BOOL)a12;
+ (double)maximumDockContinuousCornerRadiusWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (struct CGSize { double x0; double x1; })maximumIconSizeWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)maximumInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)maximumPlatterHeightWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)bounce;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (BOOL)_shouldDisplayAccessoryIconView;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_iconImageInfo;
- (struct CGSize { double x0; double x1; })_referenceIconSize;
- (double)_referenceInterIconSpacing;
- (double)contentHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)getMetrics:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; double x6; double x7; } *)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)iconContentScaleForNumberOfUserIcons:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })platterShadowOutsetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDividerVisualStyling;

@end
