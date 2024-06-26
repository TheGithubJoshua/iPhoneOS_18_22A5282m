@class NSString, BMSource, CLLocationManager, CLLocation, BMStream;

@interface _DKLocationCoordinatesMonitor : _DKMonitor <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    unsigned long long _lastLocationGeoHash300m;
    BMStream *_locationCoordinatesStream;
    BMSource *_locationCoordinatesStreamSource;
    BMStream *_locationHashedCoordinatesStream;
    BMSource *_locationHashedCoordinatesStreamSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)entitlements;
+ (id)log;

- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)stop;
- (void)start;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (int)speedRangeFrom:(double)a0;
- (int)altitudeRangeFrom:(double)a0;
- (int)locationTypeFrom:(int)a0;

@end
