@class NSString, NSArray, NSMutableDictionary, RDEstimate;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSString *_countryFromLocation;
    NSString *_countryFromMCC;
    NSString *_countryFromWiFiAPs;
    RDEstimate *_localOnlyEstimate;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)sortPreferredOrder:(id)a0;
+ (id)getCacheDirPathLegacy;
+ (id)loadCache;
+ (id)loadCacheForUnitTest;
+ (id)getCacheDirPathForUnitTest;
+ (void)createCacheAtPath:(id)a0;
+ (id)loadCache:(BOOL)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)getUserPath:(id)a0;
+ (id)getCacheDirPath;

- (id)initWithCoder:(id)a0;
- (id)countryCodeForPriority:(unsigned int)a0;
- (BOOL)saveCache;
- (void)setCountryFromWiFiAPsForUnitTest:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (id)getLastKnownCombinedEstimate;
- (void)recompute:(BOOL)a0;
- (void)setCountryFromLocation:(id)a0 forUnitTest:(BOOL)a1;
- (BOOL)saveCache:(BOOL)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)setCountryFromMCCForUnitTest:(id)a0;
- (id)getLocalOnlyEstimate;
- (BOOL)saveCacheForUnitTest;
- (void)encodeWithCoder:(id)a0;
- (void)setCountryFromLocation:(id)a0;
- (void)setCountryFromWiFiAPs:(id)a0;
- (void).cxx_destruct;
- (id)getCombinedEstimate;
- (id)description;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCountryFromLocationForUnitTest:(id)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (id)initWithCountryCodeFromLocation:(id)a0 fromMCC:(id)a1 fromWiFi:(id)a2 localEstimate:(id)a3 combinedEstimate:(id)a4 lastKnownCombinedEstimate:(id)a5 peerEstimates:(id)a6;
- (void)computeLocalCountryCode;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountryFromMCC:(id)a0 forUnitTest:(BOOL)a1;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (void)recompute;

@end
