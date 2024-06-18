@class NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, SBHFolderSettings, SBFloatyFolderBackgroundClipView, NSMutableArray, UIScribbleInteraction, NSMapTable;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIScribbleInteractionDelegate> {
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    long long _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBHFolderSettings *_folderSettings;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;

@property (readonly, nonatomic) BOOL displaysMultipleIconListsInLandscapeOrientation;
@property (nonatomic, getter=isDisplayingMultipleIconLists) BOOL displayingMultipleIconLists;
@property (nonatomic, getter=isConvertingIconListStyle) BOOL convertingIconListStyle;
@property (nonatomic, getter=isAnimatingRotation) BOOL animatingRotation;
@property (retain, nonatomic) UIScribbleInteraction *titleScribbleInteraction;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long backgroundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
+ (id)defaultIconLocation;

- (void)fadeContentForMinificationFraction:(double)a0;
- (void)_orientationDidChange:(long long)a0;
- (void)updateAccessibilityTintColors;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)returnScalingView;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (void)_handleOutsideTap:(id)a0;
- (id)iconListViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didTransitionAnimated:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)_handleLongPressGesture:(id)a0;
- (void)_convertToSingleIconListAnimated:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_handlePinchGesture:(id)a0;
- (id)legibilitySettingsForIconListViews;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })visibleFolderRelativeImageCenterForIcon:(id)a0;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_configureGestures;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (double)_rubberBandIntervalForOverscroll;
- (BOOL)_tapToCloseGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)_newPageBackgroundView;
- (void)_didRemoveIconListView:(id)a0;
- (void)_layoutSubviews;
- (BOOL)_showsTitle;
- (long long)iconVisibilityHandling;
- (void)_currentPageIndexDidChange;
- (BOOL)_shouldUseScrollableIconViewInteraction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForScalingView;
- (double)minimumVisibleScrollOffset;
- (void)willTransitionAnimated:(BOOL)a0 withSettings:(id)a1;
- (void)fadeContentForMagnificationFraction:(double)a0;
- (double)scrollableWidthForVisibleColumnRange;
- (void)_didAddIconListView:(id)a0;
- (double)_titleFontSize;
- (void)_updateScrollingState:(BOOL)a0;
- (void)_updateScalingViewFrame;
- (id)initWithConfiguration:(id)a0;
- (id)borrowScalingView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageBackgroundFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setScrollViewNeedsToClipCorners:(BOOL)a0;
- (id)accessibilityTintColorForBackgroundView:(id)a0;
- (BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)enumeratePageBackgroundViewsUsingBlock:(id /* block */)a0;
- (id)floatyFolderConfiguration;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setBackgroundAlpha:(double)a0;
- (void)setCornerRadius:(double)a0;
- (void)_updateScalingViewLocation;
- (void)dealloc;
- (void)_convertToMultipleIconListsAnimated:(BOOL)a0;
- (void)setLegibilitySettings:(id)a0;

@end
