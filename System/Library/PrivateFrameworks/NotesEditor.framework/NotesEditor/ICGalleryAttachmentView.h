@class NSIndexPath, UILongPressGestureRecognizer, ICCollapsibleActivityView, NSArray, ICGalleryAttachmentEditorController, UITapGestureRecognizer, ICThumbnailDataCache, ICAttachmentPresenter, UICollectionView, UILabel, ICGalleryAttachmentViewCollectionViewLayout;
@protocol NSObject;

@interface ICGalleryAttachmentView : ICAttachmentView

@property (retain, nonatomic) NSArray *subAttachmentItems;
@property (retain, nonatomic) id<NSObject> attachmentDidLoadObserver;
@property (retain, nonatomic) id<NSObject> previewImagesDidUpdateObserver;
@property (retain, nonatomic) NSIndexPath *indexPathForPreviewing;
@property (retain, nonatomic) ICGalleryAttachmentViewCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ICCollapsibleActivityView *activityView;
@property (retain, nonatomic) ICThumbnailDataCache *collectionViewCache;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *movingIndexPath;
@property (retain, nonatomic) NSIndexPath *indexPathForZoomTransition;
@property (retain, nonatomic) ICGalleryAttachmentEditorController *galleryEditorController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) ICAttachmentPresenter *iPhoneSystemPaperAttachmentPresenter;

+ (double)topButtonHeight;
+ (double)collectionViewLeftRightMargins;
+ (double)collectionViewMaxHeight;
+ (double)collectionViewMinHeight;
+ (BOOL)collectionViewShouldPeek;
+ (double)collectionViewTopBottomMargins;
+ (double)effectiveAspectRatioForWidth:(double)a0 height:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeOfViewForAttachment:(id)a0 textViewContentWidth:(double)a1 existingView:(id)a2;
+ (id)subAttachmentItemsForGalleryAttachment:(id)a0;
+ (id)titleForGalleryAttachment:(id)a0;

- (void)setHighlightColor:(id)a0;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)updateItems;
- (id)accessibilityLabel;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityValue;
- (void)setAttachment:(id)a0;
- (void)didChangeAttachmentTitle;
- (void)didChangeMergeableData;
- (void)didUpdatePreviewImages;
- (void)setHighlightPatternRegex:(id)a0;
- (double)galleryAttachmentViewItemHeight;
- (id)indexPathForItemClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)attachmentPresenter:(id)a0 transitionViewForAttachment:(id)a1;
- (id)attachmentPresenter:(id)a0 transitionViewForIndexPath:(id)a1;
- (double)collectionViewItemHeight;
- (void)didTapTopOfGalleryView:(id)a0;
- (void)didUpdateSubAttachmentAtIndex:(long long)a0 sizeDidChange:(BOOL)a1;
- (void)didUpdateSubAttachmentItems;
- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (id)galleryAttachmentViewCellImageCache;
- (BOOL)galleryAttachmentViewIsForManualRendering;
- (void)handleDeleteAttachmentFromPresenter:(id)a0;
- (void)invalidateCollectionViewLayout;
- (void)invalidateCollectionViewLayoutWithNewItemHeight:(double)a0;
- (void)openAttachment;
- (void)openAttachmentAtIndex:(unsigned long long)a0;
- (void)respondToLongPressReorderingGesture:(id)a0;
- (void)scrollCollectionViewToIndexPath:(id)a0;
- (void)setupCollectionViewIfNecessary;
- (BOOL)shouldAddMenuLongPressGesture;
- (BOOL)shouldAddTapGesture;
- (void)updateActivityView;
- (void)updateAttachmentTitleLabel;
- (void)updateItemForObjectID:(id)a0;
- (void)updateItemsAndLayout;

@end