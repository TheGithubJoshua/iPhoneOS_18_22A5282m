@class NSString, MPAVRoute;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {
    float _pendingVolume;
    BOOL _hasPendingVolume;
    BOOL _hasVolumeInFlight;
    BOOL _volumeInitialized;
    BOOL _volumeCapabilitiesInitialized;
}

@property (retain, nonatomic) MPAVRoute *groupRoute;
@property (retain, nonatomic) MPAVRoute *outputDeviceRoute;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)adjustVolumeValue:(float)a0;
- (void)_updateVolumeControlCapabilities:(unsigned int)a0;
- (void)endIncreasingRelativeVolume;
- (void).cxx_destruct;
- (void)endDecreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)beginDecreasingRelativeVolume;
- (void)_routeVolumeDidChangeNotification:(id)a0;
- (void)_sendVolumeButtonEventWithUsagePage:(unsigned int)a0 usage:(unsigned int)a1 down:(BOOL)a2;
- (void)beginIncreasingRelativeVolume;
- (void)dealloc;
- (id)initWithGroupRoute:(id)a0 outputDeviceRoute:(id)a1;
- (void)initializeVolume;
- (void)_setPendingVolumeIfNeeded;

@end
