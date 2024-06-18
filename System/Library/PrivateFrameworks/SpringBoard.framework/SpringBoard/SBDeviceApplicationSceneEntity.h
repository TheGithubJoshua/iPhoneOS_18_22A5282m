@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)entityWithApplicationForMainDisplay:(id)a0 withScenePersistenceIdentifier:(id)a1;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0;
+ (id)defaultEntityWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
+ (id)newEntityWithApplicationForMainDisplay:(id)a0;
+ (id)defaultEntityWithApplication:(id)a0 targetContentIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
+ (id)newEntityWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
+ (id)entityWithApplication:(id)a0 scenePersistenceIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;

- (BOOL)supportsPresentationAtAnySize;
- (id)deviceApplicationSceneEntity;
- (BOOL)supportsSplitView;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (BOOL)wantsExclusiveForeground;
- (id)initWithApplication:(id)a0 generatingNewSceneIfRequiredWithSpecification:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (BOOL)isDeviceApplicationSceneEntity;
- (Class)viewControllerClass;
- (id)initWithApplicationForMainDisplay:(id)a0;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneHandleProvider:(id)a3 displayIdentity:(id)a4;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1;
- (id)initWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
- (id)initWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
- (id)initWithApplicationSceneHandle:(id)a0;
- (id)initWithApplicationForMainSecureDisplay:(id)a0;
- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewSceneIfRequiredWithSpecification:(id)a1;
- (id)initWithApplicationForMainDisplay:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithApplication:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (id)initWithApplication:(id)a0 targetContentIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;

@end
