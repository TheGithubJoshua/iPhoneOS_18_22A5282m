@class NSString, UICollectionView, UICollectionViewDiffableDataSource, UIView, PDFThumbnailView, NSCache;

@interface PDFThumbnailsCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIContextMenuInteractionDelegate, PDFThumbnailCollectionViewInterface> {
    PDFThumbnailView *_thumbnailView;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSCache *_cache;
    UIView *_backgroundOnePixelView;
}

@property (nonatomic) BOOL allowsPageReordering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)currentPage;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (id)datasourceQueue;
- (BOOL)_canEditDocument;
- (void)updateImageForCell:(id)a0 atIndexPath:(id)a1;
- (void)_updateScrubber;
- (void)pasteAfterPage:(id)a0;
- (void)_insertFileAtURL:(id)a0 type:(id)a1 atIndex:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_insertImageWithURL:(id)a0 atIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_insertPDFDocumentWithURL:(id)a0 atIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)_insertPagesFromProvidedPDFDocument:(id)a0 atPageIndex:(unsigned long long)a1;
- (id)_pasteActionIfAvailableAfterPage:(id)a0;
- (void)_reloadPage:(id)a0;
- (void)_selectAndScrollToCurrentPageIfNeeded;
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)a0;
- (void)applySnapshotWithAnimation:(BOOL)a0;
- (id)cacheKeyForPage:(id)a0;
- (id)cachedImageForPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2;
- (void)configureCell:(id)a0 withPage:(id)a1 indexPath:(id)a2;
- (id)contextMenuForBackgroundAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)contextMenuForPage:(id)a0;
- (void)copyPage:(id)a0;
- (void)currentPageChanged:(id)a0;
- (id)defaultContextMenuForPage:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (id)imageDrawingOperationQueue;
- (id)initFromThumbnailView:(id)a0;
- (void)insertPages:(id)a0 atIndexes:(id)a1;
- (void)itemProvider:(id)a0 registerDataRepresentationForPage:(id)a1 draggedPages:(id)a2;
- (void)itemProvider:(id)a0 registerFileRepresentationForPage:(id)a1 draggedPages:(id)a2;
- (id)itemsForDragWithSession:(id)a0 atIndexPath:(id)a1;
- (void)loadImageWithPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2 completionHandler:(id /* block */)a3;
- (id)makeDatasource;
- (void)movePage:(id)a0 toIndex:(unsigned long long)a1;
- (void)movePageWithTransaction:(id)a0;
- (void)pageChanged:(id)a0;
- (id)previewForCollectionView:(id)a0 contextMenuInteraction:(id)a1;
- (id)previewForCollectionView:(id)a0 indexPath:(id)a1;
- (void)removePages:(id)a0;
- (BOOL)shouldDisplayActionButtonForPage:(id)a0;
- (id)supportedUTTypes;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0 displayBox:(long long)a1;
- (struct CGSize { double x0; double x1; })thumbnailSizeForPage:(id)a0 displayBox:(long long)a1 thumbnailView:(id)a2;
- (void)updateCacheForPage:(id)a0 withImage:(id)a1;
- (void)updateIconsImages;
- (void)updateImageForCell:(id)a0 indexPath:(id)a1 page:(id)a2;
- (void)writePDFDocumentFromPages:(id)a0 completionHandler:(id /* block */)a1;

@end