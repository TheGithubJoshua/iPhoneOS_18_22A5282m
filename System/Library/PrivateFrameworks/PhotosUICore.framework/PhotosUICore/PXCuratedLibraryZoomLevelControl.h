@class _PXCuratedLibraryZoomLevelSegmentedControl, NSArray, PXCuratedLibraryStyleGuide, NSString, PXCuratedLibraryViewModel, PXUpdater, UIVisualEffectView;
@protocol PXCuratedLibraryZoomLevelControlDelegate;

@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver> {
    PXUpdater *_updater;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    struct CGSize { double x0; double x1; } *_textSizes;
    double _minimumInterTextSpacing;
    struct CGSize { double width; double height; } _intrinsicSize;
    UIVisualEffectView *_backgroundEffectView;
    _PXCuratedLibraryZoomLevelSegmentedControl *_segmentedControl;
}

@property (readonly, nonatomic) NSArray *zoomLevelIdentifiers;
@property (nonatomic) long long selectedZoomLevel;
@property (retain, nonatomic) NSArray *enabledZoomLevelIdentifiers;
@property (nonatomic) long long shrinkLevel;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;
@property (weak, nonatomic) id<PXCuratedLibraryZoomLevelControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)a0;
+ (id)_allZoomLevelIdentifiers;

- (id)initWithCoder:(id)a0;
- (void)_invalidateSegmentedControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSegmentedControl;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 styleGuide:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleSegmentedControlAction:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_handleContentSizeCategoryDidChange:(id)a0;

@end
