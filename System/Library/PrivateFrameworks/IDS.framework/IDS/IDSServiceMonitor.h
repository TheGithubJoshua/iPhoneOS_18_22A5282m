@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void)_updateAvailability;
- (id)initWithService:(id)a0;
- (void)updateAvailability;
- (void).cxx_destruct;
- (id)description;
- (long long)serviceAvailability;
- (void)dealloc;
- (void)_postAvailability:(long long)a0;

@end
