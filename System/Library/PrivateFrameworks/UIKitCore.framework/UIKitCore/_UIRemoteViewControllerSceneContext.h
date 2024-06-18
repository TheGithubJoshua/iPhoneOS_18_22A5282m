@class FBSDisplayIdentity;

@interface _UIRemoteViewControllerSceneContext : NSObject <NSCopying, NSSecureCoding> {
    BOOL _enhancedWindowingEnabled;
    FBSDisplayIdentity *_displayIdentity;
    long long _screenReferenceDisplayModeStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayIdentity:(id)a0 screenReferenceDisplayModeStatus:(long long)a1 enhancedWindowEnabled:(BOOL)a2;

@end
