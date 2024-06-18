@interface AMDPerf : NSObject

+ (id)generatePerformanceDict;
+ (void)log:(id)a0 atLevel:(int)a1;
+ (void)endMonitoringEvent:(id)a0;
+ (id)getContainer;
+ (void)startMonitoringEvent:(id)a0;
+ (void)enable:(BOOL)a0;
+ (void)provision;
+ (void)setVerbosity:(char)a0;
+ (void)sampleForKey:(id)a0;

@end
