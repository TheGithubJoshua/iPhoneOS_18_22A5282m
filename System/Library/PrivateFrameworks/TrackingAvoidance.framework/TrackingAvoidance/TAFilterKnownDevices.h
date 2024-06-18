@interface TAFilterKnownDevices : NSObject

+ (id)removeIssuedDevices:(id)a0 deviceRecord:(id)a1;
+ (id)removeKnownSuspiciousDevices:(id)a0 deviceRecord:(id)a1;
+ (id)removeDuplicateSuspiciousDevices:(id)a0;
+ (id)removeAndProcessBackgroundDetections:(id)a0 deviceRecord:(id)a1;
+ (id)removeMetricsFromKnownDevices:(id)a0 deviceRecord:(id)a1;

@end
