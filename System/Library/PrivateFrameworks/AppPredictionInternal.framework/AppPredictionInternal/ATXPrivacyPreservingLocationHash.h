@interface ATXPrivacyPreservingLocationHash : NSObject

+ (id)readDeviceSpecificSalt;
+ (long long)dropLastTenBitsOfSHA256Hash:(long long)a0;
+ (long long)preservePrivacyForGeoHash:(long long)a0;
+ (long long)privacyPreservingZoom7GeohashForLocation:(id)a0 locationEnabled:(BOOL)a1;
+ (id)randomData;
+ (long long)privacyPreservingCoarseGeohashForLocation:(id)a0 locationEnabled:(BOOL)a1;
+ (long long)privacyPreservingGeohashForLocation:(id)a0 locationHashLevel:(int)a1 locationEnabled:(BOOL)a2;
+ (id)setSaltToUserDefaults:(id)a0 scheme:(id)a1;
+ (long long)geohashCollidesWithKnownLocationTypeForGeohash:(long long)a0;
+ (long long)sha256HashForGeohash:(long long)a0 salt:(id)a1;
+ (long long)privacyPreservingGeohashForLocation:(id)a0 locationEnabled:(BOOL)a1;

@end
