@class WKWebView;
@protocol WFWebViewControllerDelegate;

@interface WFWebViewController : UIViewController

@property (retain, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WFWebViewControllerDelegate> delegate;

- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)done;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWebView:(id)a0;
- (void)updateNavigationItems;

@end
