@class NSURL;

@interface PPLPeopleEntitySceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) NSURL *url;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
