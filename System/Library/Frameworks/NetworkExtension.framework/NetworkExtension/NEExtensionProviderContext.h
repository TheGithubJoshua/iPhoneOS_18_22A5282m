@class NSString, NEConfiguration, NSXPCConnection, NEProvider, NSObject;
@protocol OS_os_transaction, NEExtensionProviderHostProtocol;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderHostProtocol> _hostContext;
    NSString *_description;
    BOOL _isDisposed;
    BOOL _started;
    NEConfiguration *_configuration;
    id /* block */ _stopCompletionHandler;
    NSXPCConnection *_hostConnection;
    NEProvider *_provider;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *extensionPoint;
@property (readonly, nonatomic) Class requiredProviderSuperClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)wake;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelWithError:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)dispose;
- (void)dealloc;
- (id)_principalObject;
- (void)completeSession;
- (void)stopWithReason:(int)a0;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (void)dropProvider;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)startedWithError:(id)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;

@end
