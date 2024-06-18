@interface SRAuthExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)remoteProxy;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
