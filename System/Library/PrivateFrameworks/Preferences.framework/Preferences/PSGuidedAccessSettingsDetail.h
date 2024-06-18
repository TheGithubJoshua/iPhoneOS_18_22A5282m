@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesURL;
+ (id)iconImage;
+ (unsigned long long)guidedAccessAvailability;
+ (void)enterGuidedAccessMode;
+ (BOOL)guidedAccessHasPasscode;
+ (void)setGuidedAccessSwitchEnabled:(BOOL)a0;


@end
