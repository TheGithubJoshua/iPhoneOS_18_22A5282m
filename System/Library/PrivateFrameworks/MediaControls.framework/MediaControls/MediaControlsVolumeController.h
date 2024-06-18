@class MPVolumeController, NSString, NSHashTable;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPVolumeController *systemVolumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyVolumeChangedForVolumeController:(id)a0 volumeControlAvailable:(BOOL)a1 effectiveVolume:(float)a2;
- (id)glyphStateForVolumeLevel:(double)a0 packageName:(id)a1;
- (id)packageNameForRouteType:(long long)a0 isRTL:(BOOL)a1 isSlider:(BOOL)a2;
- (void)setVolume:(float)a0 forRouteType:(long long)a1;
- (BOOL)volumeControlAvailableForRouteType:(long long)a0;
- (float)volumeForRouteType:(long long)a0;

@end
