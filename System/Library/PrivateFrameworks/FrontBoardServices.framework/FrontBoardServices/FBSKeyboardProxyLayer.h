@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (id)_succinctDescription;
- (BOOL)isKeyboardProxyLayer;
- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;
- (long long)alignment;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithXPCDictionary:(id)a0;

@end
