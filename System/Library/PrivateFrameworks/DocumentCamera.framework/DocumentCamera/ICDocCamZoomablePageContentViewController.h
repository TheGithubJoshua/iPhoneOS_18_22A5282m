@class VKCImageAnalysisInteraction, NSString, UIImageView, UIImage, UIScrollView;
@protocol ICDocCamZoomablePageContentDelegate;

@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews;
@property (nonatomic) struct CGSize { double width; double height; } prevScrollViewSize;
@property (retain, nonatomic) VKCImageAnalysisInteraction *analysisInteraction;
@property (weak, nonatomic) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)doubleTap:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (void)setupAccessibility;
- (void)resetZoom;
- (void)view:(id)a0 setCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)analyzeCurrentImageIfNecessary;
- (BOOL)isTouchingAnalyzableContentAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pageContentViewDidPencilDown;
- (void)resetImageCentering;
- (void)setupScales;
- (void)singleTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(float)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;

@end
