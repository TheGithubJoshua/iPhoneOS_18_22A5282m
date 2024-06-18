@class SKUILayoutCache, NSString, SKUIViewElementLayoutContext, UIImageView, SKUIPanelView, SKUIPanelTemplateViewElement, SKUIMetricsImpressionSession, UIScrollView;

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {
    UIImageView *_backgroundImageView;
    BOOL _didAttemptBecomeFirstResponder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    long long _lastContentWidth;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIMetricsImpressionSession *_metricsImpressionSession;
    SKUIPanelView *_panelView;
    SKUILayoutCache *_textLayoutCache;
    UIScrollView *_scrollView;
    SKUIPanelTemplateViewElement *_templateElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_layoutScrollView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)contentScrollView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_layoutBackgroundImageView;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)_activeBackgroundColor;
- (id)_layoutContext;
- (void)_keyboardWillChangeNotification:(id)a0;
- (id)_imageForBackgroundImageElement:(id)a0;
- (void)_keyboardHideNotification:(id)a0;
- (void)_reloadBackgroundImageView;
- (void)_reloadContentSize;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)a0 forced:(BOOL)a1;
- (id)_templateBackgroundColor;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)a0;
- (void)layoutCacheDidFinishBatch:(id)a0;

@end
