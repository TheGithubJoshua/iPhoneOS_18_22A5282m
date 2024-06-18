@interface DADeviceAccessAnalytics

+ (void /* unknown type, empty encoding */)initialize;
+ (void)markSessionActivationForPid:(id)a0 atTime:(id)a1;
+ (void)markSessionInvalidationForPid:(id)a0 atTime:(id)a1;
+ (void)markState:(id)a0 forDeviceId:(id)a1 atTime:(id)a2;
+ (void)sendAnalytics:(id)a0 forEvent:(id)a1;
+ (void)sendAnalyticsInfo:(id)a0 forEvent:(id)a1 withDeviceIdentifier:(id)a2;

@end
