@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject

@property (readonly, nonatomic) EFLocked *periodicDataProviders;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;
@property (readonly, nonatomic) id<EFScheduler> registrationScheduler;
@property (nonatomic) BOOL registered;

+ (id)log;

- (id)init;
- (void)_logPeriodicEvents;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;
- (void).cxx_destruct;
- (void)logOneTimeEvent:(id)a0;
- (void)_registerXPCActivity;

@end
