@interface SBDaemonHandler : NSObject

+ (id)stateDescription;
+ (BOOL)addRequest:(id)a0 forKey:(id)a1 forDaemonPid:(int)a2;
+ (void)initialize;
+ (void)noteDaemonCanceled:(id)a0;
+ (void)removeRequestForKey:(id)a0 forDaemonPid:(int)a1;

@end
