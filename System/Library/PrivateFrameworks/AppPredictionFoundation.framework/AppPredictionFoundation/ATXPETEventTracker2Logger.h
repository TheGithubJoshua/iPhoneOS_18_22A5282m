@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>

- (void)trackDistributionForMessage:(id)a0 value:(double)a1;
- (void)logMessage:(id)a0;
- (void)trackScalarForMessage:(id)a0 count:(int)a1;
- (void)trackScalarForMessage:(id)a0;

@end
