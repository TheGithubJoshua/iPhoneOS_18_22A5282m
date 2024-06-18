@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)initWithExtension:(id)a0;
- (id)init;
- (id)vendorProtocolDelegate;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)bundle;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtensionIdentifier:(id)a0;

@end
