@class AUAudioUnitViewService, AURemoteHost;

@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost *_host;
    BOOL _isUIExtension;
    BOOL _isRunningInProcess;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)iOSViewController;
- (void)open:(id /* block */)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;

@end
