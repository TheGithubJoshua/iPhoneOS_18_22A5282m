@class NSString;

@interface PSAirplaneModeSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)preferencesURL;
+ (id)iconImage;
+ (void)setEnabled:(BOOL)a0;


@end
