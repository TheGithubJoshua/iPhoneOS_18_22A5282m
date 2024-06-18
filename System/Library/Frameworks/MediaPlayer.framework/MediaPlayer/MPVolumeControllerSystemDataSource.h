@class NSString, NSSet, AVSystemController, NSMutableArray, NSObject;
@protocol MPVolumeControllerDataSourceDelegate, OS_dispatch_queue;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    NSMutableArray *_pendingVolumeCompletions;
    NSObject<OS_dispatch_queue> *_avscQueue;
    AVSystemController *_avSystemController;
}

@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) NSSet *volumeAudioCategories;
@property (nonatomic) BOOL forceAVSystemController;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate;
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
- (id)init;
- (id)initWithVolumeAudioCategory:(id)a0;
- (void)_systemMuteDidChange:(id)a0;
- (void)_systemVolumeDidChange:(id)a0;
- (void)_volumeDidChangeNotification:(id)a0;
- (void)_setup;
- (void)_tearDown;
- (void)updateVolumeControlCapabilities:(unsigned int)a0;
- (void)_updateRouteLabelForRoute:(id)a0;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_routeDidChangeNotification:(id)a0;
- (void)adjustVolumeValue:(float)a0;
- (void)updateVolume:(float)a0;
- (id)initWithVolumeAudioCategories:(id)a0;
- (void)endIncreasingRelativeVolume;
- (void)_mediaServerDiedNotification:(id)a0;
- (void).cxx_destruct;
- (id)initCommon;
- (void)endDecreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)beginDecreasingRelativeVolume;
- (void)reloadWarning;
- (void)beginIncreasingRelativeVolume;
- (void)dealloc;
- (id)_reloadQueue;
- (void)initializeVolume;
- (id)_mediaPlaybackVolumeAudioCategory;

@end
