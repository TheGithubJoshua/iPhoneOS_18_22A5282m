@class NSString;

@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {
    struct ThreadSafeWeakPtr<WebKit::PopUpSOAuthorizationSession> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock<WebKit::PopUpSOAuthorizationSession>, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock<WebKit::PopUpSOAuthorizationSession>>, WTF::DefaultRefDerefTraits<WTF::ThreadSafeWeakPtrControlBlock<WebKit::PopUpSOAuthorizationSession>>> { void *m_ptr; } m_controlBlock; } _weakSession;
    BOOL _isFirstNavigation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewDidClose:(id)a0;
- (id)initWithSession:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;

@end
