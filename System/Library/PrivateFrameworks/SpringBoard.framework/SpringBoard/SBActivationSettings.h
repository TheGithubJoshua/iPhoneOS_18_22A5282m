@class NSString, BSMutableSettings;

@interface SBActivationSettings : NSObject <BSSettingDescriptionProvider, SBActivationSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForActivationSetting:(unsigned int)a0;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (long long)flagForActivationSetting:(unsigned int)a0;
- (void)applyActivationSettings:(id)a0;
- (id)copyActivationSettings;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (id)init;
- (void)clearActivationSettings;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescription;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)_settingsAreValidToMoveContentToNewScene;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)copyActivationSettingsPassingFilter:(id /* block */)a0;

@end
