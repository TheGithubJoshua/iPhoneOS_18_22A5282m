@class SBFTraitsSettingsOrientation, SBFTraitsSettingsZOrderLevel, NSString;

@interface SBFTraitsSettings : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (retain, nonatomic) SBFTraitsSettingsZOrderLevel *zOrderLevelSettings;
@property (retain, nonatomic) SBFTraitsSettingsOrientation *orientationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithZOrderLevelSettings:(id)a0 orientationSettings:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
