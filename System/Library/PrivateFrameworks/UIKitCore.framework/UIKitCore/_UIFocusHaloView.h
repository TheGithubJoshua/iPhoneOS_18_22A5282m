@class UIColor, NSString, _UIShape, _UIShapeView, UITraitCollection;

@interface _UIFocusHaloView : UIView <PTSettingsKeyObserver>

@property (retain, nonatomic) _UIShapeView *haloView;
@property (retain, nonatomic) _UIShapeView *gapView;
@property (retain, nonatomic) _UIShapeView *maskViewWhenInside;
@property (retain, nonatomic) UIColor *gapColor;
@property (retain, nonatomic) UITraitCollection *gapSourceTraitCollection;
@property (readonly, nonatomic) UIColor *haloColor;
@property (copy, nonatomic) _UIShape *shape;
@property (nonatomic) long long position;
@property (nonatomic) double thickness;
@property (nonatomic) double gapWidth;
@property (nonatomic) BOOL geometryFrozen;
@property (readonly, nonatomic) double totalConsumedSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToSuperview;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setHidden:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)_updateGapColor;
- (BOOL)_debugEnabled;
- (BOOL)_ignoreRemoveAllAnimations;
- (void)_updateDebugUI;
- (void)_updateHalo;
- (id)resolvedGapColor;

@end
