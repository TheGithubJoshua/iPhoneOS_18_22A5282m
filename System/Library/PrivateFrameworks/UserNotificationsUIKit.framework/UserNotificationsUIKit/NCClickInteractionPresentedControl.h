@class UITraitCollection, NSString, NCClickInteractionPresentedView, MTMaterialView;

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate>

@property (copy, nonatomic, getter=_title, setter=_setTitle:) NSString *title;
@property (readonly, nonatomic, getter=_presentedView) NCClickInteractionPresentedView *presentedView;
@property (readonly, nonatomic, getter=_materialRecipe) long long materialRecipe;
@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)_setCornerRadius:(double)a0;
- (void)_configureMaterialViewsIfNecessary;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_configureContentViewIfNecessaryWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 materialRecipe:(long long)a1;
- (id)_newMaterialViewWithRecipe:(long long)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)adjustForContentSizeCategoryChange;

@end
