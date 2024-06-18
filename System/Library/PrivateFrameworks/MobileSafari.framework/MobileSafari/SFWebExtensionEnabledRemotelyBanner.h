@class NSArray;

@interface SFWebExtensionEnabledRemotelyBanner : SFLinkBanner {
    NSArray *_remotelyEnabledExtensions;
}

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (void)addExtension:(id)a0;
- (id)preferredButtonBackgroundColor;
- (id)preferredButtonTintColor;

@end
