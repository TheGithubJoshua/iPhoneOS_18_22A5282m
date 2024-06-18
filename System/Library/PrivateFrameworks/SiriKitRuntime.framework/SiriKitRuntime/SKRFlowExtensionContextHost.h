@interface SKRFlowExtensionContextHost : NSExtensionContext <SKRRemoteConversationHostXPC>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)init;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;

@end
