@interface CMVehicleState : NSObject

+ (unsigned long long)vehicularOperatorState;
+ (BOOL)isAvailable;
+ (id)mostRecentInVehicle;
+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (unsigned long long)vehicularState;
+ (id)mostRecentVehicleConnection;
+ (unsigned long long)vehicularHints;

@end
