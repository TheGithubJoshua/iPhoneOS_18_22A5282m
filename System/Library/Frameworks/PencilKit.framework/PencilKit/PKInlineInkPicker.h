@class _PKAllowDrawingWhilePresentingPopoverView, NSMutableDictionary, PKInkAttributesPicker, NSObject, PKInlineColorPicker, UILayoutGuide, UIView, UIColor, NSString, PKInk, _PKToolIndicator, NSArray, UIPencilInteraction;
@protocol OS_dispatch_queue, PKInlineInkPickerDelegate, OS_dispatch_semaphore;

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate> {
    BOOL _shouldAnimateRuler;
}

@property (retain, nonatomic) NSArray *inkIdentifiers;
@property (readonly, nonatomic) unsigned long long selectedInkIndex;
@property (readonly, nonatomic) unsigned long long previousDrawingToolIndex;
@property (readonly, nonatomic) unsigned long long previousToolIndex;
@property (retain, nonatomic) NSArray *toolButtonItems;
@property (retain, nonatomic) PKInlineColorPicker *colorPicker;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *clippingView;
@property (nonatomic) BOOL shouldEmboss;
@property (retain, nonatomic) NSMutableDictionary *_inkForIdentifierDict;
@property (retain, nonatomic) _PKAllowDrawingWhilePresentingPopoverView *_allowDrawingWhilePresentingPopoverView;
@property (retain, nonatomic) PKInkAttributesPicker *presentedInkAttributesPicker;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialViewControllerTransitionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *serialViewControllerTransitionSemaphore;
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction;
@property (retain, nonatomic) _PKToolIndicator *contentsHiddenToolIndicator;
@property (weak, nonatomic) id<PKInlineInkPickerDelegate> delegate;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) BOOL forceCompactLayout;
@property (copy, nonatomic) UIColor *selectedColor;
@property (copy, nonatomic) NSString *selectedInkIdentifier;
@property (readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide;
@property (nonatomic) BOOL isUsedOnDarkBackground;
@property (nonatomic) unsigned long long colorSet;
@property (nonatomic) BOOL contentsHidden;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _extentRect;
@property (nonatomic) BOOL rulerEnabled;
@property (retain, nonatomic) NSArray *allowedTools;
@property (nonatomic) BOOL pencilGestureSupportEnabled;
@property (nonatomic) unsigned long long attributeSet;
@property (copy, nonatomic) PKInk *selectedInk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageNamed:(id)a0;
+ (BOOL)_axLargerTextSizesEnabled;
+ (id)_defaultCriticallyDampedSpringAnimator;
+ (id)_defaultInkForIdentifier:(id)a0 attributeSet:(unsigned long long)a1;
+ (double)_outputForResistanceFunction:(double)a0 factor:(double)a1;
+ (id)_sharedPencilUserDefaults;
+ (id)defaultInkForAttributeSet:(unsigned long long)a0;
+ (BOOL)inkIdentifierHasMutableAttributes:(id)a0;
+ (id)sharedImageNameCache;
+ (double)spacingForToolIndex:(unsigned long long)a0 sizeState:(unsigned long long)a1;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_commonInit;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pencilInteractionDidTap:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForNonDrawingToolAtIndex:(long long)a0;
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)a0;
- (id)_allowDrawingWhilePresentingPopoverViewPassthroughArray;
- (void)_animateRulerToggled:(id)a0;
- (void)_axHandleLongPressForLargeTextHUD:(id)a0;
- (id)_axLabelForToolButton:(id)a0;
- (id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)a0;
- (BOOL)_colorPickerIsInkPickerContentsHidden:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_colorPickerRectForContentsHiddenColorPickerPresentation:(id)a0;
- (void)_dismissInkAttributesPicker:(id /* block */)a0;
- (id)_effectiveViewControllerForPopoverPresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_extentRect;
- (void)_forceSetAttributeSet:(unsigned long long)a0;
- (id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;
- (id)_inkForTogglingEraserAndLastDrawingToolOnPencilDoubleTap;
- (id)_inlineColorPickerAllowDrawingPassthroughView:(id)a0;
- (void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)a0;
- (void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)a0;
- (void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)a0;
- (double)_layoutAlphaForToolIndex:(long long)a0;
- (BOOL)_layoutButtonSelectedForToolIndex:(long long)a0;
- (id)_layoutCalculateUncenteredSubviewFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutCenteredFrameForToolIndex:(long long)a0 uncenteredFrames:(id)a1 centeringTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)_layoutSeparatorViewColorEmbossed:(BOOL)a0 isUsedOnDarkBackground:(BOOL)a1;
- (void)_layoutUpdateSizeAndSelectionState;
- (double)_layoutYOffsetForToolIndex:(long long)a0;
- (void)_loadToolbarItems;
- (id)_queueForSerialViewControllerTransitionFromColorPicker:(id)a0;
- (void)_reloadToolbarItems;
- (void)_resetUIOnPencilDoubleTapTimerEnded;
- (id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)a0;
- (void)_setSelectionStateNoLayout:(unsigned long long)a0;
- (void)_setSizeStateNoLayout:(unsigned long long)a0;
- (void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)a0;
- (BOOL)_shouldEnablePencilGestures;
- (void)_showInkAttributesPickerFromView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayMode:(unsigned long long)a2 shouldHideArrow:(BOOL)a3 completion:(id /* block */)a4;
- (void)_teardownAllowDrawingWhilePresentingPopoverView;
- (id)_toolButtonContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateFrameForAllowDrawingWhilePresentingPopoverView;
- (void)_updateSelectedInkIndex:(unsigned long long)a0;
- (void)_updateSubviewsWithInk:(id)a0 animated:(BOOL)a1;
- (double)cachedToolButtonWidthForSizeState:(unsigned long long)a0;
- (id)colorForInkIdentifier:(id)a0;
- (void)colorPickerColorTappedInCompactChooseToolState:(id)a0;
- (void)colorPickerDidSelectColor:(id)a0 colorChanged:(BOOL)a1;
- (id)createToolButtonItemWithInkIdentifier:(id)a0 shouldEmboss:(BOOL)a1;
- (id)initWithEmbossing:(BOOL)a0;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)a0;
- (id)inkIdentifierForIndex:(unsigned long long)a0;
- (BOOL)isDrawingToolIdentifier:(id)a0;
- (BOOL)isDrawingToolIndex:(unsigned long long)a0;
- (id)lastDrawingToolInk;
- (id)minimizedImageForInk:(id)a0 small:(BOOL)a1;
- (struct CGSize { double x0; double x1; })minimumSizeForSizeState:(unsigned long long)a0 selectionState:(unsigned long long)a1;
- (void)notifyColorSelected:(id)a0 didChange:(BOOL)a1;
- (void)notifyToolSelected:(BOOL)a0;
- (double)offsetForToolIndex:(unsigned long long)a0 pressed:(BOOL)a1;
- (void)resetToDrawingToolWithAnimation:(BOOL)a0;
- (void)selectColorPickerColor:(id)a0;
- (unsigned long long)selectionStateForSizeState:(unsigned long long)a0 previousSelectionState:(unsigned long long)a1;
- (void)setContentsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelectedColor:(id)a0 animated:(BOOL)a1;
- (void)setSelectedInk:(id)a0 animated:(BOOL)a1;
- (void)setSelectedInkIdentifier:(id)a0 animated:(BOOL)a1;
- (unsigned long long)sizeStateForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 sizeState:(unsigned long long)a1 selectionState:(unsigned long long)a2;
- (void)toggleRuler;
- (void)toolIndicator:(id)a0 willPresent:(BOOL)a1 animated:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toolIndicatorCenteringRect:(id)a0;
- (void)toolTapped:(id)a0;
- (void)updateSelectedToolColor:(id)a0;
- (void)userDidTouchTool:(id)a0;
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)a0;

@end
