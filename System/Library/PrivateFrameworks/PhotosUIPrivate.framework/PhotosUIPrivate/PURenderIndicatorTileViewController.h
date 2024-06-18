@class PUOperationStatus, UIView, NSUndoManager, PLRoundProgressView, NSString, UIButton, PXOperationStatus, PUAssetSharedViewModel, UILabel;

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PXLoadingStatusManagerObserver>

@property (nonatomic) BOOL needsUpdateStatus;
@property (nonatomic) BOOL needsUpdateSizeClass;
@property (nonatomic) BOOL needsUpdateStatusViews;
@property (copy, nonatomic) PUOperationStatus *status;
@property (retain, nonatomic) PXOperationStatus *editActionStatus;
@property (nonatomic) long long sizeClass;
@property (nonatomic) struct CGSize { double width; double height; } progressIndicatorSize;
@property (retain, nonatomic) UIView *roundedBackgroundView;
@property (retain, nonatomic) UILabel *renderingLabel;
@property (retain, nonatomic) PLRoundProgressView *progressView;
@property (nonatomic) BOOL isProgressViewVisible;
@property (retain, nonatomic) UIButton *errorButton;
@property (nonatomic) double renderLabelTextWidth;
@property (nonatomic) BOOL willShowProgressAfterDelay;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)a0;
+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })renderIndicatorTileSizeForSizeClass:(long long)a0;

- (void)applyLayoutInfo:(id)a0;
- (void)_updateSizeClassIfNeeded;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (void)_updateStatusIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_invalidateStatus;
- (void)_setNeedsUpdate;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedBackgroundViewFrame;
- (void)viewDidLoad;
- (void)_invalidateStatusViews;
- (void).cxx_destruct;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItem:(id)a2;
- (void)_updateSubviewOrdering;
- (void)setProgressViewVisible:(BOOL)a0;
- (void)_updateViewFramesForCollapseState:(BOOL)a0;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateStatusViewsIfNeeded;
- (void)_invalidateSizeClass;

@end
