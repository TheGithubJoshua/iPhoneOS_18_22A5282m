@interface FTCServiceMonitor : NSObject {
    long long _availability;
    long long _type;
    int _token;
}

@property (readonly, nonatomic) long long serviceType;

- (void)_updateAvailability;
- (void)updateAvailability;
- (id)initWithServiceType:(long long)a0;
- (long long)serviceAvailability;
- (void)dealloc;
- (void)_postAvailability:(long long)a0;

@end
