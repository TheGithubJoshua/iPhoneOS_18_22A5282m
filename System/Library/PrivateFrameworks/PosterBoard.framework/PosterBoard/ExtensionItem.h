@class PRSceneViewController, PRSPosterPath, _EXExtensionIdentity;
@protocol BSInvalidatable;

@interface ExtensionItem : NSObject {
    _EXExtensionIdentity *_extension;
    PRSceneViewController *_viewController;
    PRSPosterPath<BSInvalidatable> *_tmpPoster;
    long long _activationStyle;
}

+ (id)itemWithExtension:(id)a0 activationStyle:(long long)a1;

- (id)activate;
- (unsigned long long)hash;
- (void)deactivate;
- (id)name;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (BOOL)wasEverActivated;

@end
