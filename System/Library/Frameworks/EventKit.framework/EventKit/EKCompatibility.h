@interface EKCompatibility : NSObject

@property (class) BOOL simulateLegacyBehaviors;

+ (void)perform:(id /* block */)a0 whileSimulatingLegacyBehaviors:(BOOL)a1;
+ (BOOL)isProgramSDKAtLeast:(struct { unsigned int x0; unsigned int x1; })a0;
+ (void)performWhileSimulatingLegacyBehaviors:(id /* block */)a0;

@end
