@class NSString, NSURL, WKWebView;

@interface RUIWebView : RUIElement <WKNavigationDelegate> {
    WKWebView *_webView;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *html;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)sourceURL;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (BOOL)_isScrollEnabled;
- (id)scriptForDisableMagnification;
- (id)userStyleSheet;

@end
