@class _TtC18ActivityUIServices18ActivityController, NSMapTable;

@interface ACUISActivityController : NSObject

@property (class, readonly, nonatomic) ACUISActivityController *sharedInstance;

@property (retain, nonatomic) _TtC18ActivityUIServices18ActivityController *activityController;
@property (retain, nonatomic) NSMapTable *activityUpdateProviders;
@property (readonly, nonatomic) BOOL isActivityEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)endActivity:(id)a0;
- (BOOL)isActivityActive:(id)a0;
- (void)disableActivitiesForIdentifier:(id)a0;
- (id)activityProviderWrapping:(id)a0;
- (id)observeActivityAlertsWithHandler:(id /* block */)a0;
- (id)observeActivityUpdatesWithHandler:(id /* block */)a0;
- (void)setSystemProvidedMetrics:(id)a0;

@end
