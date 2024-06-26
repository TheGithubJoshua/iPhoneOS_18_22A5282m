@interface TransparencySFAnalytics : SFAnalytics

+ (id)logger;
+ (id)databasePath;

- (void)logMetric:(id)a0 withName:(id)a1;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)backgroundPerform:(id /* block */)a0;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)noteEventNamed:(id)a0;
- (void)logSuccessForEventNamed:(id)a0;

@end
