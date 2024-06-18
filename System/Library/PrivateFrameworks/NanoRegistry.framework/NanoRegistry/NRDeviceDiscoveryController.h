@class NSArray;

@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;

+ (id)sharedInstance;

- (void)end;
- (id)init;
- (void)begin;
- (void)overrideSignalStrengthLimit:(long long)a0;

@end
