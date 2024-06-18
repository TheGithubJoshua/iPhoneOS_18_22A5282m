@class NSString, BSMutableSettings;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding> {
    BSMutableSettings *_settings;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearDeactivationSettings;
- (BOOL)boolForDeactivationSetting:(unsigned int)a0;
- (void)applyDeactivationSettings:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forDeactivationSetting:(unsigned int)a1;
- (id)objectForDeactivationSetting:(unsigned int)a0;
- (id)copyDeactivationSettings;
- (long long)flagForDeactivationSetting:(unsigned int)a0;
- (void)setFlag:(long long)a0 forDeactivationSetting:(unsigned int)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescription;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
