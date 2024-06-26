@class MRUSystemOutputDeviceRouteController, NSString, MPVolumeController;
@protocol MRUSystemVolumeControllerDelegate;

@interface MRUSystemVolumeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver, MPVolumeControllerDelegate>

@property (readonly, nonatomic) MPVolumeController *systemVolumeController;
@property (readonly, nonatomic) MPVolumeController *primaryVolumeController;
@property (readonly, nonatomic) MPVolumeController *secondaryVolumeController;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSystemVolumeControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)packageStateForVolumeValue:(float)a0;

- (void)volumeController:(id)a0 volumeControlCapabilitiesDidChange:(unsigned int)a1;
- (void)decreaseVolume;
- (unsigned int)volumeCapabilitiesForType:(long long)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)updateVolumeControllers;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void).cxx_destruct;
- (void)increaseVolume;
- (float)volumeValueForType:(long long)a0;
- (long long)typeForVolumeController:(id)a0;
- (void)setVolumeValue:(float)a0 forType:(long long)a1;

@end
