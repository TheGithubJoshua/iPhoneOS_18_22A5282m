@class FBSSceneIdentityToken;

@interface UIKBArbiterClientFocusContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) FBSSceneIdentityToken *sceneIdentity;

+ (id)focusContextForSceneIdentity:(id)a0 contextID:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
