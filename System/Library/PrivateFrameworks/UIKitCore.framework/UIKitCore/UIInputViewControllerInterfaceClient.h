@protocol _UIIVCInterface;

@interface UIInputViewControllerInterfaceClient : NSExtensionContext

@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (id)responseDelegate;
- (void)_handleInputViewControllerState:(id)a0;
- (void)_tearDownRemoteService;

@end
