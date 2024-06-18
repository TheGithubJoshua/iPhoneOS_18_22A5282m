@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void)unregisterAllZoneChanges;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)unregisterForZoneChanges:(id)a0;
- (void)getCurrentTrackedZones;
- (void)registerForZoneChangesMatching:(id)a0;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)exitedZone:(id)a0;

@end
