@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)init;
- (void)enableDataAccess;
- (void)disableDataAccess;
- (id)_debugPerformerWithReason:(id)a0 errorHandler:(id /* block */)a1;
- (id)fetchStatusReportsWithError:(id *)a0;
- (BOOL)isBabySitterEnabled;
- (void)unapplyChangeTrackingBehavior:(long long)a0;
- (void)enableBabySitter;
- (void)_setBoolValue:(BOOL)a0 forBehaviorKey:(id)a1;
- (long long)changeTrackingBehaviors;
- (void)applyChangeTrackingBehavior:(long long)a0;
- (long long)_getIntegerForKey:(id)a0 withDefaultValue:(long long)a1;
- (void).cxx_destruct;
- (void)_setIntegerValue:(long long)a0 forBehaviorKey:(id)a1;
- (BOOL)_getBoolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (void)_crashDaemonWithMessage:(id)a0;
- (id)initWithDaemonController:(id)a0;
- (BOOL)isDataAccessEnabled;
- (void)disableBabySitter;

@end
