@interface FIAppStoreAvailability : NSObject

+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)a0;
+ (BOOL)_isDeviceTablet;
+ (void)_isSupportedDeviceAvailableWithCompletion:(id /* block */)a0;
+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)a0;

@end
