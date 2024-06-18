@class WKWebView;

@interface _SFSharingLinkExtractor : NSObject {
    WKWebView *_webView;
}

- (void).cxx_destruct;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;
- (id)initWithWebView:(id)a0;

@end
