@class PUAssetReference, PXUIAssetBadgeView, PUAssetActionManager, NSString, PUBrowsingViewModel;

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate>

@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView;
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_configureBadgeView:(id)a0 isOverContent:(BOOL)a1 isLivePhotoDisabled:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })badgeTileSize;

- (void)applyLayoutInfo:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (id)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)assetBadgeView:(id)a0 userDidSelectBadges:(unsigned long long)a1;
- (id)_disableLivePhotosSelectionManager;
- (id)_reviewActionManager;

@end
