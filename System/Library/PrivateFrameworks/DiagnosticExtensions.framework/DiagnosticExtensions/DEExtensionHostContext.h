@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>

@property (copy) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)setupForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)attachmentsForParameters:(id)a0 withProgressHandler:(id /* block */)a1 withHandler:(id /* block */)a2;
- (void)collectionDidUpdateWithProgress:(id)a0;
- (BOOL)hasEntitlement;
- (void).cxx_destruct;
- (void)teardownForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;

@end
