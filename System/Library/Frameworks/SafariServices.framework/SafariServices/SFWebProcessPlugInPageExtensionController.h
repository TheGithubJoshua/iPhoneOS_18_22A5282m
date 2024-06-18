@class WKWebProcessPlugInBrowserContextController, NSMutableDictionary, _WKRemoteObjectInterface;

@interface SFWebProcessPlugInPageExtensionController : NSObject {
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    _WKRemoteObjectInterface *_extensionControllerInterface;
    NSMutableDictionary *_extensionToScriptWorldMap;
}

- (void)_setUpExtensionControllerInterface;
- (void)clearExtensionScriptWorlds;
- (void)finalizeJavaScriptForSharingExtension:(id)a0 arguments:(id)a1;
- (void)_clearExtensionControllerInterface;
- (id)initWithBrowserContextController:(id)a0;
- (void)prepareJavaScriptWorldForSharingExtension:(id)a0 javaScript:(id)a1;
- (void).cxx_destruct;
- (void)evaluateJavaScriptForSharingExtension:(id)a0 extraArguments:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;

@end
