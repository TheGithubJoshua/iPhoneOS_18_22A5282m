@class UIScene, NSString, UISceneConfiguration, NSUserActivity, NSDictionary, UICanvas;

@interface UISceneSession : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding, NSSecureCoding> {
    UISceneConfiguration *_configuration;
    NSUserActivity *_stateRestorationActivity;
    NSDictionary *_userInfo;
    struct { unsigned char _userInfoIsCurrent : 1; unsigned char _stateRestorationActivityIsDirty : 1; unsigned char _stateRestorationActivityIsCurrent : 1; unsigned char _trackingSessionRequest : 1; unsigned char _configurationIsDirty : 1; unsigned char _userInfoIsDirty : 1; unsigned char _isInternal : 1; } _sessionFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) long long systemType;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, nonatomic, getter=_isInternal) BOOL _internal;
@property (readonly, nonatomic) BOOL _configurationNeedsReevalulation;
@property (nonatomic, setter=_setTrackingRefreshRequest:) BOOL _trackingRefreshRequest;
@property (nonatomic, setter=_setConfigurationIsDirty:) BOOL _configurationIsDirty;
@property (nonatomic, setter=_setUserInfoIsDirty:) BOOL _userInfoIsDirty;
@property (nonatomic, setter=_setStateRestorationActivityIsDirty:) BOOL _stateRestorationActivityIsDirty;
@property (readonly, weak, nonatomic) UIScene *scene;
@property (readonly, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) UISceneConfiguration *configuration;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) NSUserActivity *stateRestorationActivity;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCanvasRepresentation;
+ (id)canvasRepresentationForSystemType:(long long)a0;

- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_initWithPersistentIdentifier:(id)a0 sessionRole:(id)a1 configurationName:(id)a2;
- (id)_copyWithoutUserInfo;
- (void)_setScene:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_loadUserInfo;
- (id)_init;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (Class)delegateClass;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)_clearAllDirtyFlags;
- (void)_loadStateRestorationActivityIfNeeded;
- (void)_resetStateRestorationToActivity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_updateConfiguration:(id)a0;

@end
