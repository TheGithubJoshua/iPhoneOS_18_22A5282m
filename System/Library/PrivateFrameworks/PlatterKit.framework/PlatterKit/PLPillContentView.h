@class UIStackView, NSArray, PLPillContentItem, NSString, UIView, NSMapTable;

@interface PLPillContentView : UIView <PLPillPrivate, PLContentSizeCategoryAdjusting> {
    UIStackView *_centerStackView;
    UIView *_referenceContentItemView;
    NSMapTable *_wrapperViewsToConstraints;
    NSMapTable *_accessoryViewsToConstraints;
}

@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (readonly, nonatomic) UIView *trailingAccessoryView;
@property (copy, nonatomic) NSArray *centerContentItems;
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (BOOL)requiresConstraintBasedLayout;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setCenterContentItems:(id)a0 animated:(BOOL)a1;
- (id)initWithLeadingAccessoryView:(id)a0 trailingAccessoryView:(id)a1;
- (id)initWithLeadingAccessoryView:(id)a0;
- (void)updateCenterContentItem:(id)a0 withContentItem:(id)a1;
- (id)_arrangedSubviewForContentItem:(id)a0;
- (double)_capInsetForAccessoryView:(id)a0;
- (double)_capWidthWithAccessoryView:(id)a0;
- (void)_cleanupStackView;
- (void)_configureCenterStackViewIfNecessary;
- (void)_incomingTopWrapperView:(id *)a0 incomingBottomWrapperView:(id *)a1 outgoingWrapperViews:(id)a2 forOutgoingContentItems:(id)a3 incomingContentItems:(id)a4 existingWrapperViews:(id)a5;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeWithReferenceView:(id)a0;
- (void)_invalidateVerticalCenterConstraintsForAccessoryView:(id)a0;
- (BOOL)_isAccessoryPinnedToTopLine;
- (BOOL)_isWrappingRequiredForCenterContentItemView:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_referenceContentItemView;
- (void)_updateConstraintsForAccessoryView:(id)a0;
- (void)_updateConstraintsForWrapperView:(id)a0;
- (id)initWithTrailingAccessoryView:(id)a0;
- (BOOL)isWrappingRequiredForCenterContentItem:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentItem:(id)a0;

@end
