@class NSMutableDictionary;

@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}

- (id)init;
- (BOOL)consumeSandboxExtensions:(id)a0;
- (void)_stopUsingSecurityScopedURLs;
- (void).cxx_destruct;
- (void)dealloc;

@end
