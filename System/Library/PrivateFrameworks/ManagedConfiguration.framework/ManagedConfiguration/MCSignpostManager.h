@interface MCSignpostManager : NSObject

+ (void)willGetFeature:(id)a0;
+ (void)willSetFeature:(id)a0;
+ (void)willPostEffectiveSettingsChangedNotification;
+ (id)signpostsForTypeFilter:(unsigned long long)a0 featureFilter:(id)a1 duration:(double)a2 error:(id *)a3;

@end
