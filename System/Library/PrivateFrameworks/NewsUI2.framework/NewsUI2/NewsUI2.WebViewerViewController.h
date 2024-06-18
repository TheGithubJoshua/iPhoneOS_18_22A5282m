@interface NewsUI2.WebViewerViewController : UIViewController <WKNavigationDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ config;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
