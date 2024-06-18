@class SKUIProductPageOverlayController, NSString, SKUIGridComponent, SKUIMissingItemLoader, SKUIClientContext, SKUIVideoImageDataConsumer, NSMutableDictionary, NSMapTable, NSMutableIndexSet;

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {
    NSMapTable *_artworkRequests;
    SKUIClientContext *_clientContext;
    BOOL _containsLockups;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_hiddenIconIndexSet;
    BOOL _isLandscape;
    BOOL _isPad;
    struct CGSize { double width; double height; } _lockupImageBoundingSize;
    SKUIMissingItemLoader *_missingItemLoader;
    NSString *_moreButtonTitle;
    long long _numberOfColumns;
    SKUIProductPageOverlayController *_overlayController;
    long long _overlaySourceItemIndex;
    long long _screenScale;
    NSMapTable *_lockupArtworkContexts;
    SKUIVideoImageDataConsumer *_videoImageDataConsumer;
    NSMutableDictionary *_videoPlaceholderImages;
}

@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (double)_heightForEditorialAtIndexPath:(id)a0;
- (id)_itemCellWithLockups:(id)a0 indexPath:(id)a1;
- (id)_artworkContextForLockupSize:(long long)a0;
- (id)_cellImageForItem:(id)a0 lockupSize:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForMediaIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForVideoLockupIndex:(long long)a0;
- (id)_editorialCellWithEditorials:(id)a0 indexPath:(id)a1;
- (id)_editorialLayoutForEditorial:(id)a0;
- (id)_editorialLayoutForLockup:(id)a0;
- (id)_editorialLockupCellWithLockups:(id)a0 indexPath:(id)a1;
- (void)_enumerateItemsFromStartIndex:(long long)a0 withBlock:(id /* block */)a1;
- (void)_enumerateVisibleIndexPathsWithBlock:(id /* block */)a0;
- (void)_enumerateVisibleItemsWithBlock:(id /* block */)a0;
- (double)_heightForEditorialLockup:(id)a0;
- (double)_heightForEditorialLockupAtIndexPath:(id)a0;
- (double)_heightForLockupAtIndexPath:(id)a0 gridType:(long long)a1;
- (double)_heightForMedia:(id)a0 width:(double)a1;
- (double)_heightForMediaAtIndexPath:(id)a0;
- (id)_itemForIndex:(long long)a0;
- (void)_loadImageForItem:(id)a0 lockupSize:(long long)a1 loader:(id)a2 reason:(long long)a3;
- (void)_loadImageForVideo:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 loader:(id)a2 reason:(long long)a3;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (id)_mediaCellWithMedia:(id)a0 indexPath:(id)a1;
- (double)_mediaWidthForMediaIndex:(long long)a0 gridWidth:(double)a1;
- (id)_missingItemLoader;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)a0 mediaIndex:(long long)a1;
- (long long)_numberOfLandscapeColumnsWithGridType:(long long)a0;
- (long long)_numberOfPortraitColumnsWithGridType:(long long)a0;
- (id)_popSourceViewForOverlayController:(id)a0;
- (void)_reloadEditorialLockupCell:(id)a0 withLockup:(id)a1 index:(long long)a2;
- (void)_reloadItemCell:(id)a0 withLockup:(id)a1 index:(long long)a2;
- (void)_selectItem:(id)a0 withIndex:(long long)a1;
- (void)_setPositionForClickEvent:(id)a0 withElementIndex:(long long)a1;
- (void)_showProductPageWithItem:(id)a0 index:(long long)a1 animated:(BOOL)a2;
- (void)_updateVisibileEditorialWithEditorialOrientation:(long long)a0;
- (id)_videoThumbnailImageForVideo:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (id)clickEventWithItem:(id)a0 elementName:(id)a1 index:(long long)a2;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidSelectItemAtIndexPath:(id)a0;
- (void)collectionViewDidTapVideoAtIndexPath:(id)a0;
- (void)collectionViewWillApplyLayoutAttributes:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (id)itemOfferClickEventWithItem:(id)a0 elementName:(id)a1 index:(long long)a2;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)itemStateCenterRestrictionsChanged:(id)a0;
- (void)mediaView:(id)a0 playbackStateDidChange:(long long)a1;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (void)prefetchResourcesWithReason:(long long)a0;
- (id)productPageOverlay:(id)a0 flipSourceViewToDismissItem:(id)a1;
- (id)productPageOverlay:(id)a0 flipSourceViewToPresentItem:(id)a1;
- (void)productPageOverlayDidDismiss:(id)a0;
- (void)willAppearInContext:(id)a0;
- (void)willHideInContext:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end