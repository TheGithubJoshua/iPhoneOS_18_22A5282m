@class NSString, HAENGeoLocation, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HAENLocationGatingHelper : NSObject {
    HAENGeoLocation *_geoLocation;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSDictionary *_regionBehavior;
    BOOL _EUVolumeLimitFlagOn;
    NSNumber *_productTypeOverride;
    struct { NSString *countryCode; NSString *source; NSString *disposition; BOOL featureMandatory; BOOL EUVolumeLimitBehavior; } _stats;
}

+ (id)sharedInstance;

- (void)_contryConfigurationDidChange:(id)a0;
- (id)init;
- (void)deviceDataDispositionDidChange;
- (BOOL)_regionAndDeviceMandatesFeature:(id)a0;
- (void)_updateLocationGatingFlags;
- (void)_loadRegionPlistFile;
- (void)_updateStatsWithGeoLocation:(id)a0 disposition:(id)a1 andMandatoryFlag:(BOOL)a2;
- (void)_logLocationGatingFlags;
- (id)_readDeviceDisposition;
- (void)_updateSampleTransient:(id)a0;
- (BOOL)_validDataDisposition:(id)a0;
- (void)reloadProductTypeOverride;
- (void)_donateSignalToTipsKitOnInitialization;
- (BOOL)_isIPod;
- (BOOL)_validCountryCodeSource:(unsigned int)a0;
- (void)_donateSignalToTipsKit:(BOOL)a0;
- (void)_updateImpl;
- (void).cxx_destruct;
- (int)_getMGProductType;
- (void)dealloc;
- (BOOL)_isHAENFeatureMandatory:(id)a0 dataDisposition:(id)a1;
- (struct { id x0; id x1; id x2; BOOL x3; BOOL x4; })getStats;
- (void)update;
- (void)_setHEANEnabled:(id)a0;
- (BOOL)_shouldUpdateLocation:(id)a0;
- (void)_setFeatureMandatoryFlag:(id)a0;

@end
