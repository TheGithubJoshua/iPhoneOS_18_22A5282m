@class NSArray, NSString, IAMWebView, _WKRemoteObjectInterface, ICInAppMessageEntry;
@protocol IAMWebProcessProxy, IAMWebMessageControllerDelegate;

@interface IAMWebMessageController : NSObject <WKNavigationDelegate, IAMWebProcessDelegate> {
    id<IAMWebProcessProxy> _webProcessProxy;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ICInAppMessageEntry *_messageEntry;
    BOOL _isGlobalJSOAvailable;
    BOOL _didMainNavigationFinish;
    BOOL _hasSentContentPages;
}

@property (retain, nonatomic) NSArray *contentPages;
@property (copy, nonatomic) id /* block */ loadCompletion;
@property (readonly, nonatomic) IAMWebView *webView;
@property (weak, nonatomic) id<IAMWebMessageControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)_callLoadCompletionWithError:(id)a0;
- (void)_checkReadyForLoadCompletion;
- (void)_createJSOContentPages:(id)a0 fromMessageEntry:(id)a1 withBlock:(id /* block */)a2;
- (void)loadMessageFromMessageEntry:(id)a0 withWebArchiveURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)unregisterExportedObjectInterface;
- (void)webProcessJSODidCallClose;
- (void)webProcessJSODidCallOpen:(id)a0 options:(id)a1;
- (void)webProcessJSODidCallPerformAction:(id)a0 options:(id)a1;
- (void)webProcessJSODidReportEvent:(id)a0;

@end