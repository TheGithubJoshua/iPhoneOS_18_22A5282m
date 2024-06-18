@class _UIBarButtonItemData, NSString, _UIButtonBarButtonVisualProvider, NSLayoutConstraint, NSDate;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    BOOL _autolayoutIsCleanForBoundsChange;
    NSDate *_appearanceDate;
}

@property (readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton;
@property (readonly, nonatomic, getter=isBreadcrumb) BOOL breadcrumb;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData;
@property (readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _buttonBarHitRect;
@property (nonatomic) long long preferredMenuElementOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)configureBreadcrumbBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setSelected:(BOOL)a0;
- (BOOL)updatePresentedMenuFrom:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_is_setNeedsLayout;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)configureBackButtonFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (void)configureFromBarItem:(id)a0 withAppearanceDelegate:(id)a1;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)setNeedsAppearanceUpdate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setTouchHasHighlighted:(BOOL)a0;
- (void)_configureFromBarItem:(id)a0 appearanceDelegate:(id)a1 isBackButton:(BOOL)a2 useBreadcrumbStyle:(BOOL)a3;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_accessibilitySettingsChanged:(id)a0;
- (void)pasteTouchDown;
- (id)initWithVisualProvider:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)focusEffect;
- (id)_preferredSender;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
