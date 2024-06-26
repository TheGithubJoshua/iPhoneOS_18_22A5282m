@class _SBRecentlyUsedSceneIdentityCache, NSString, BKSHIDEventDeferringTarget, SBWindowScene, FBSSceneIdentityToken;

@interface _SBKeyboardFocusPolicy : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying> {
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    FBSSceneIdentityToken *_overrideSceneIdentityToken;
    SBWindowScene *_preferredSBFocusWindowScene;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
    long long _selectionPolicy;
    BOOL _shouldSuppressRemoteDeferring;
    BOOL _cameraIsHosted;
}

@property (readonly, nonatomic) unsigned long long policyGeneration;
@property (readonly, nonatomic) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (readonly, nonatomic) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (readonly, weak, nonatomic) SBWindowScene *preferredSBFocusWindowScene;
@property (readonly, copy, nonatomic) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (readonly, nonatomic) long long advicePolicy;
@property (readonly, nonatomic) BOOL shouldSuppressRemoteDeferring;
@property (readonly, nonatomic) BOOL cameraIsHosted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;
+ (id)new;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
