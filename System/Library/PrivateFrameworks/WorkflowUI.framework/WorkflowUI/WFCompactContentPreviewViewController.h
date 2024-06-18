@class WFCompactThumbnailViewController, NSString, UIActivityIndicatorView, UIView, WFContentItem;
@protocol WFCompactContentPreviewViewControllerDelegate;

@interface WFCompactContentPreviewViewController : UIViewController <WFCompactThumbnailViewControllerDelegate>

@property (weak, nonatomic) UIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) WFCompactThumbnailViewController *thumbnailViewController;
@property (readonly, nonatomic) WFContentItem *contentItem;
@property (weak, nonatomic) id<WFCompactContentPreviewViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *sourceViewForQuickLook;
@property (readonly, nonatomic) BOOL contentAllowsScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (double)contentHeightForWidth:(double)a0;
- (id)_fileThumbnailViewControllerForContentItem:(id)a0;
- (void)_getTypeSpecificThumbnailViewControllerForContentItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)getThumbnailViewControllerForContentItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateContentSize;
- (void)setContentItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)thumbnailViewControllerDidInvalidateSize:(id)a0;

@end
