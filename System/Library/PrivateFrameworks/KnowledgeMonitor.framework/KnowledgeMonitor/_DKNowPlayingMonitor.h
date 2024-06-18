@class AVOutputContext, _DKEvent, NSNumber;

@interface _DKNowPlayingMonitor : _DKMonitor {
    _DKEvent *_previousEvent;
    NSNumber *_previousArtistStoreIdentifier;
    NSNumber *_previousAlbumStoreIdentifier;
    unsigned int _bmSaveState;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)eventStream;
+ (id)entitlements;
+ (void)setPlaybackState:(unsigned int)a0 bundleId:(id)a1 track:(id)a2 outputDeviceIDs:(id)a3 mediaType:(id)a4 iTunesStoreIdentifier:(id)a5 iTunesSubscriptionIdentifier:(id)a6;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 metadata:(id)a1;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)saveBMEventWithCurrent:(id)a0 outputDevices:(id)a1 artistStoreIdentifier:(id)a2 albumStoreIdentifier:(id)a3;
- (id)init;
- (void)stop;
- (void)start;
- (void)deactivate;
- (id)_metadataFromInfo:(id)a0 outputDevices:(id)a1;
- (void)_stripMetadata:(id)a0 forBundleId:(id)a1;
- (void).cxx_destruct;
- (void)outputDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)_registerForNowPlayingNotifications;
- (void)synchronouslyReflectCurrentValue;
- (void)_nowPlayingInfoDidChange:(void *)a0 outputDevices:(id)a1;

@end
