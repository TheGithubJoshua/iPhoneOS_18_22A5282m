@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
