@class NSString, NRDevice;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NRDevice *_device;
}

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchBuildType;
- (id)watchModelNumber;
- (id)iOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (void).cxx_destruct;
- (id)watchOSBuildVersion;
- (id)watchCompanionDevicePlatform;
- (id)watchRegion;
- (id)watchRegionInfo;
- (struct { long long x0; long long x1; long long x2; })watchElectrocardiogramVersion;

@end
