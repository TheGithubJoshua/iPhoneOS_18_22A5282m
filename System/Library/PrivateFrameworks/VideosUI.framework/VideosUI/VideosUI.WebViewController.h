@interface VideosUI.WebViewController : UIViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ url;
}

- (void)doneTapped;
- (void)backTapped;
- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
