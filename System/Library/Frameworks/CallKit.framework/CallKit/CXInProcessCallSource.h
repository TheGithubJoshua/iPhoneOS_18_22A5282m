@class CXInProcessProvider, NSString, NSURL;

@interface CXInProcessCallSource : CXCallSource {
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_localizedName;
}

@property (retain, nonatomic) CXInProcessProvider *provider;

- (id)vendorProtocolDelegate;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleURL;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 fallbackLocalizedName:(id)a2;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)localizedName;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end
