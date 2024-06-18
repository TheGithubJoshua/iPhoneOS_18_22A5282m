@class NSString, HMHomeManager;

@interface DEDHomeKitManager : NSObject

@property (retain) HMHomeManager *homeKitManager;
@property (readonly) NSString *homeKitIdentifier;
@property (readonly) NSString *homeTheaterSystemName;
@property (readonly) NSString *homeTheaterSystemIdentifier;

+ (id)sharedInstance;

- (id)stringForAirPlayPreference:(id)a0;
- (void)start;
- (BOOL)isHomeKitResident;
- (void).cxx_destruct;

@end
