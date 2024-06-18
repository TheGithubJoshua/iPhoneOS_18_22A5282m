@class NSURL, UIImageView, UICollectionView, UIPrintPreviewPageFetcher, UIAction, UIButton, UIView, NSLayoutConstraint, NSString, UIPrintPreviewInfo, UIPrintPanelViewController, UIDocumentInteractionController, UIPrintInfo;

@interface UIPrintPreviewViewController : UIViewController <UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout>

@property (retain) UIPrintPreviewPageFetcher *pageFetcher;
@property (copy) id /* block */ completionHandler;
@property (retain) UIPrintPreviewInfo *previewInfo;
@property (retain) UIPrintInfo *printInfo;
@property long long totalPageCount;
@property (retain) NSURL *pdfURL;
@property (retain) NSURL *sharePDFFileURL;
@property (retain) UIButton *layoutPopupButton;
@property (retain) NSLayoutConstraint *layoutPopupButtonTopConstraint;
@property (retain) UIAction *pagesPopupAction;
@property (retain) UIAction *sheetsPopupAction;
@property (retain) NSLayoutConstraint *collectionViewTopConstant;
@property long long previewScrollDirection;
@property (retain) UIDocumentInteractionController *documentInteractionController;
@property (retain) UIImageView *pinchGestureBeginningPageImageView;
@property (retain) UIImageView *pinchAnimationView;
@property (retain) UIView *pinchAnimationWhiteBackgroundView;
@property struct CGPoint { double x; double y; } pinchGestureLastPoint;
@property double pinchGestureLastScale;
@property (weak) UIPrintPanelViewController *printPanelViewController;
@property (retain) UICollectionView *collectionView;
@property BOOL presentingDocumentInteractionController;
@property (retain) NSURL *quickLookPDFURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)headerHeight;
- (void)updateLayout;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)setScrollDirection:(long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (BOOL)needRedrawWithNUp;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)handlePinch:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)setupCollectionView;
- (void)reloadItems;
- (void)documentInteractionController:(id)a0 didEndSendingToApplication:(id)a1;
- (void)documentInteractionControllerDidEndPreview:(id)a0;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;
- (id)excludedActivityTypesForDocumentInteractionController:(id)a0;
- (BOOL)canAddAllPages:(id)a0;
- (void)updatePdfURL:(id)a0 options:(id)a1 completed:(BOOL)a2;
- (void)_mainQueue_reloadItemAtIndex:(id)a0;
- (double)_paperAspectRatio;
- (id)_tempURLForPreviewing;
- (void)addAllPages:(id)a0;
- (void)addPage:(id)a0 forPageIndex:(long long)a1;
- (void)animateCellAndPresentDocumentInteractionController;
- (BOOL)canAddPage:(id)a0 forPageIndex:(long long)a1;
- (BOOL)canModifyPageRange;
- (BOOL)canRemovePage:(id)a0 forPageIndex:(long long)a1;
- (BOOL)canSetEndPage:(id)a0 forPageIndex:(long long)a1;
- (BOOL)canSetStartPage:(id)a0 forPageIndex:(long long)a1;
- (BOOL)canShowMenuBar;
- (id)documentInteractionControllerByPreparedForPreviewing;
- (id)getSharedPDFFileURL;
- (void)gotoFirstPage:(id)a0;
- (void)gotoLastPage:(id)a0;
- (id)initWithScrollDirection:(long long)a0 printPanelViewController:(id)a1;
- (void)layoutPopupButtonChanged:(long long)a0;
- (BOOL)nUpActive;
- (void)pageBadgeTapped:(long long)a0;
- (BOOL)pageIndexIsInRange:(long long)a0;
- (void)pageRangeUpdated;
- (id)previewCollectionView;
- (void)previewPDF;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })previewVisibleItemsRange;
- (id)printPagePreviewActionItemsWithPageIndex:(long long)a0;
- (id)printPagePreviewViewControllerForItemAtPageIndex:(long long)a0;
- (void)removePage:(id)a0 forPageIndex:(long long)a1;
- (void)resetPrintPreview;
- (void)setEndPage:(id)a0 forPageIndex:(long long)a1;
- (void)setStartPage:(id)a0 forPageIndex:(long long)a1;
- (void)setupLayoutControl;
- (void)setupPreivewPageFetcher;
- (id)sortedVisibleIndexPaths;
- (void)updateHeaderFooterSizes;
- (void)updateLayoutControl;
- (void)updateLayoutWithPdfUpdate:(BOOL)a0;
- (void)updatePageRange:(id)a0;
- (void)updatePrintPreviewInfo:(id)a0;
- (void)updateQuicklookPDF;

@end