@class WebView;

@interface WebIndicateLayer : CALayer {
    WebView *_webView;
}

- (void)layoutSublayers;
- (id)initWithWebView:(id)a0;
- (id)actionForKey:(id)a0;

@end
