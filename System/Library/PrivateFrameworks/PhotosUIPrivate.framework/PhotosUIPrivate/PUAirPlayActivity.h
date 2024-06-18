@class NSString;

@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>

@property (readonly, nonatomic, getter=isRouteAvailable) BOOL routeAvailable;
@property (readonly, nonatomic) NSString *localizedRouteUnavailabilityMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)activityType;
- (id)activityTitle;
- (void)dealloc;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)tearDownForCompletion;
- (void)_registerForAirPlayNotifications;
- (void)_unregisterForAirPlayNotifications;
- (void)airPlayControllerRouteAvailabilityChanged:(id)a0;

@end
