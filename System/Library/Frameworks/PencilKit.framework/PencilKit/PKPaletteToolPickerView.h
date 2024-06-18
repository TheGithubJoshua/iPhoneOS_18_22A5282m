@class UIStackView, PKPaletteAttributeViewController, NSHashTable, NSArray, PKPaletteToolPickerClippingView, PKPaletteToolView, PKPaletteTooltipPresentationHandle, NSString, NSMutableArray, NSLayoutConstraint, PKScrollViewDelegateEventsHandler, UIScrollView;
@protocol UIScrollViewDelegate, PKDrawingPaletteStatistics, PKPaletteToolPickerViewDelegate;

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling> {
    NSMutableArray *_mutableToolViews;
}

@property (retain, nonatomic) id<PKDrawingPaletteStatistics> drawingPaletteStatistics;
@property (retain, nonatomic) PKPaletteToolPickerClippingView *clippingView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *clippingViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *clippingViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *clippingViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *clippingViewTrailingConstraint;
@property (retain, nonatomic) NSMutableArray *toolsWidthConstraints;
@property (retain, nonatomic) NSMutableArray *toolsHeightConstraints;
@property (retain, nonatomic) NSMutableArray *toolsWidthCompactConstraints;
@property (retain, nonatomic) PKPaletteToolView *lastSelectedToolView;
@property (retain, nonatomic) PKPaletteAttributeViewController *toolAttributesPopover;
@property (retain, nonatomic) NSHashTable *presentedViewControllers;
@property (weak, nonatomic) id<UIScrollViewDelegate> lastScrollViewDelegateBeforeScrollingToolToVisible;
@property (retain, nonatomic) PKScrollViewDelegateEventsHandler *scrollViewDelegateEventsHandler;
@property (readonly, nonatomic) unsigned long long _selectedToolsCount;
@property (weak, nonatomic) id<PKPaletteToolPickerViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *toolViews;
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView;
@property (readonly, nonatomic) unsigned long long indexOfSelectedTool;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) double interItemToolsSpacing;
@property (nonatomic) BOOL unselectedToolsVisible;
@property (nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled;
@property (retain, nonatomic) PKPaletteTooltipPresentationHandle *tooltipPresentationHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateUI;
- (BOOL)_useCompactSize;
- (void)removeToolView:(id)a0;
- (id)_eraserToolView;
- (void)updatePopoverUI;
- (void)_addToolView:(id)a0 updateUI:(BOOL)a1;
- (BOOL)_canPresentToolAttributesPopover;
- (BOOL)_canSelectToolView:(id)a0;
- (id)_firstInkingTool;
- (void)_insertToolView:(id)a0 atIndex:(unsigned long long)a1 updateUI:(BOOL)a2;
- (void)_installScrollViewInView:(id)a0;
- (void)_installStackViewInScrollView:(id)a0;
- (BOOL)_isAllToolsColorUserInterfaceStyleEqualsTo:(long long)a0;
- (BOOL)_isAllToolsEdgeLocationEqualsTo:(unsigned long long)a0;
- (void)_setSelectedToolView:(id)a0 animated:(BOOL)a1 showToolTip:(BOOL)a2 notifyDelegate:(BOOL)a3;
- (void)_showToolAttributesPopoverFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)_stackViewAxis;
- (void)_toolTapGestureRecognizer:(id)a0;
- (double)_widthForToolAtIndex:(unsigned long long)a0 isCompactSize:(BOOL)a1;
- (void)addToolView:(id)a0;
- (BOOL)canToggleSelectedToolAndEraser;
- (BOOL)canToggleSelectedToolAndLastSelectedTool;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;
- (BOOL)hasToolViewWithIdentifier:(id)a0;
- (id)initWithToolViews:(id)a0;
- (void)insertToolView:(id)a0 atIndex:(unsigned long long)a1;
- (void)reloadToolViewsWithDataSource:(id)a0;
- (void)removeToolViewsWithIdentifier:(id)a0;
- (void)scrollSelectedToolViewToVisibleAnimated:(BOOL)a0;
- (void)selectToolViewAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRectForPopoverPresentationForTool:(id)a0;
- (id)sourceViewForPopoverPresentationForTool:(id)a0;
- (void)toggleSelectedToolAndEraserAnimated:(BOOL)a0;
- (void)toggleSelectedToolAndLastSelectedToolAnimated:(BOOL)a0;
- (void)toggleSelectedToolAttributesPopoverFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)updateClippingViewEdgesVisibility;

@end