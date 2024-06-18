@class NSString, MRNowPlayingController, NSHashTable, NSDate, NSObject, AFInstanceContext;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOMediaNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_playbackStateGroup;
    long long _playbackStateGroupDepth;
    long long _playbackState;
    NSDate *_lastPlayingDate;
    NSHashTable *_listeners;
    AFInstanceContext *_instanceContext;
    MRNowPlayingController *_nowPlayingController;
    BOOL _isProxyGroupPlayer;
    BOOL _isObserving;
}

@property (readonly, nonatomic) long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultObserver;

- (void)_beginGroup;
- (void)addListener:(id)a0;
- (void)mediaRemoteActiveDeviceInfoDidChange:(id)a0;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (void)removeListener:(id)a0;
- (void)_updateProxyGroupPlayerState;
- (void)controller:(id)a0 playbackQueueDidChangeFrom:(id)a1 to:(id)a2;
- (void)_handleLastPlayingDateChangedTo:(id)a0;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)a0;
- (void)getNowPlayingInfoForCurrentItemWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)mediaRemoteNowPlayingInfoDidChange:(id)a0;
- (void)getPlaybackStateAndLastPlayingDateWithCompletion:(id /* block */)a0;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)getPlaybackStateWithCompletion:(id /* block */)a0;
- (void)_fetchLastPlayingDateWithCompletion:(id /* block */)a0;
- (void)getProxyGroupPlayerStateWithCompletion:(id /* block */)a0;
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)a0 completion:(id /* block */)a1;
- (void)mediaRemoteNowPlayingApplicationPlaybackStateDidChange:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void)dealloc;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (void)_endGroup;
- (void)getNowPlayingApplicationBundleIdentifier:(id /* block */)a0;
- (id)initWithQueue:(id)a0 instanceContext:(id)a1;
- (void)controllerWillReloadForInvalidation:(id)a0;
- (BOOL)_supportsProxyGroupPlayer;
- (void)_startObservingNowPlayingAppPlaybackState;
- (BOOL)_isProxyGroupPlayer;

@end
