@class WKWebView;

@interface _SFAddToHomeScreenActivity : UIAddToHomeScreenActivity {
    WKWebView *_webView;
}

- (id)activityType;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_showsInSystemActionGroup;

@end
