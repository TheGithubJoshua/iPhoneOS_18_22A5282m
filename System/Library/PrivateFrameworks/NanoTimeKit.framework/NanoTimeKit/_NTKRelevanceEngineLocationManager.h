@class NSString, NTKLocationManager;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager *_locationManager;
    NSString *_token;
}

- (id)initWithLocationManager:(id)a0;
- (id)currentLocation;
- (void).cxx_destruct;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)stopLocationUpdates;

@end
