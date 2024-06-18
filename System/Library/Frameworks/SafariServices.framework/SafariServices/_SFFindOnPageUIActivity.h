@class _SFWebView;

@interface _SFFindOnPageUIActivity : _SFActivity {
    _SFWebView *_webView;
}

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
