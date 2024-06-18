@class WKWebView, NSLayoutConstraint;

@interface QLWebLocationItemViewController : QLItemViewController {
    WKWebView *_webView;
    id /* block */ _loadingHandler;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)scrollView;
- (void)dealloc;
- (BOOL)canSwipeToDismiss;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_updateConstraintConstants:(BOOL)a0;

@end
