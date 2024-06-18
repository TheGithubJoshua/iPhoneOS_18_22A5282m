@class NSString, MRUOutputDeviceAsset;
@protocol MRUVolumeHUDRouteDescriptionProviderDelegate;

@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset;
@property (retain, nonatomic) MRUOutputDeviceAsset *overrideOutputDeviceAsset;
@property (weak, nonatomic) id<MRUVolumeHUDRouteDescriptionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)packageStateForVolumeValue:(float)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)resetOverridePackageDescription;
- (void)cycleOverridePackageDescriptions;
- (void)updateOutputDeviceAsset;

@end
