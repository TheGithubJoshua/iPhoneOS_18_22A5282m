@class NSString, NSTimer, _WKRemoteObjectInterface, NSArray, NSSet;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    BOOL _allowFetchingOverCellularNetwork;
}

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)resetState;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)didCreateWebView;
- (void)didFetchTouchIconURLs:(id)a0 andFaviconURLs:(id)a1 forURL:(id)a2;
- (id)initWithRequest:(id)a0 allowFetchingOverCellularNetwork:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)webViewConfiguration;
- (void)_downloadFirstValidImageWithURLs:(id)a0 failureHandler:(id /* block */)a1;
- (void)_downloadPendingTouchIconURLs;
- (void)_scheduleTimeoutWithTimeInterval:(double)a0;
- (void)_setUpRemoteObjectProxies;
- (void)_tearDownRemoteObjectProxies;
- (void)clearWebView;
- (void)didCompleteWithResult:(id)a0;
- (void)didFailFetch;
- (void)loadRequest;
- (void)startOffscreenFetching;
- (void)willClearWebView;

@end
