@class NSXPCConnection;
@protocol ProxyAnalyticsDelegate;

@interface ProxyAnalytics : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) id<ProxyAnalyticsDelegate> delegate;

- (void)requestReverseGeocodeForLatitude:(double)a0 longitude:(double)a1 interfaceType:(long long)a2;
- (void)performAppTrackingPeriodicTasks;
- (void)performAppEndpointTrackingPeriodicTasks;
- (void)trainModelAndScore:(BOOL)a0 lastScoreDate:(id)a1;
- (void)performAppExperiencePeriodicTasks;
- (void).cxx_destruct;
- (void)performAppPeriodicTasks;
- (void)performPersistentStoreHealthCheck;
- (void)dealloc;

@end
