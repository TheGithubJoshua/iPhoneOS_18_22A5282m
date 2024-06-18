@class NSString;

@interface OKDynamicPushBehavior : UIPushBehavior <OKSettingsSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;

@end
