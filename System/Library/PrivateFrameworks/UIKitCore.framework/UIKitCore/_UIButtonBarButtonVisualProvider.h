@class UIColor, _UIButtonBarButton, UIView, UIBarButtonItem;

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {
    _UIButtonBarButton *_button;
    UIBarButtonItem *_barButtonItem;
}

@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (copy, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;

+ (id)visualProviderForIdiom:(long long)a0;
+ (void)registerPlatformVisualProviderClass:(Class)a0 forIdiom:(long long)a1;

- (void)buttonWillMoveToSuperview:(id)a0;
- (BOOL)buttonSelectionState:(id)a0 forRequestedState:(BOOL)a1;
- (id)matchingPointerShapeForView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContainer:(id)a2;
- (BOOL)buttonEnabledState:(id)a0 forRequestedState:(BOOL)a1;
- (Class)buttonBarButtonClass;
- (id)pointerShapeInContainer:(id)a0;
- (Class)buttonControlClass;
- (id)buttonContextMenuInteractionConfiguration;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (void)resetButtonHasHighlighted;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (void)buttonWillMoveToWindow:(id)a0;
- (BOOL)supportsBackButtons;
- (BOOL)shouldLift;
- (id)buttonContextMenuTargetedPreview;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })buttonImageViewSize:(id)a0;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (id)buttonSpringLoadedInteractionBehavior;
- (id)pointerPreviewParameters;
- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (BOOL)buttonHighlitedState:(id)a0 forRequestedState:(BOOL)a1;
- (void)pointerWillExit:(id)a0;
- (void)updateButton:(id)a0 appearance:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)traitCollectionChangedInSubtreeFrom:(id)a0 to:(id)a1;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)a0;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (id)focusEffect;
- (id)buttonSpringLoadedInteractionEffect;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)a0;
- (void)updateMenu;
- (BOOL)canUpdateMenuInPlace;
- (void)pointerWillEnter:(id)a0;

@end
