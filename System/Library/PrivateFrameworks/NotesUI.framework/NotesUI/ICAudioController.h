@class NSObject, AVPlayer, ICAttachment;

@interface ICAudioController : NSObject

@property (retain, nonatomic) AVPlayer *currentPlayer;
@property (retain, nonatomic) ICAttachment *currentAttachment;
@property (retain, nonatomic) NSObject *playbackTimeObserver;
@property (readonly, nonatomic) BOOL isPlaying;

+ (void)pauseIfPlaying;
+ (id)sharedAudioController;

- (id)init;
- (void)play;
- (void)play:(id)a0;
- (void)pause;
- (void)updateNowPlayingInfo;
- (void)seekToTime:(double)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)togglePlayPause;
- (void)attachmentWillBeDeletedNotification:(id)a0;
- (void)notifyPaused;
- (void)notifyPlaying;
- (void)notifyStopped;
- (long long)remotePause:(id)a0;
- (long long)remotePlay:(id)a0;
- (long long)remoteSkipBackward:(id)a0;
- (long long)remoteSkipForward:(id)a0;
- (long long)remoteStop:(id)a0;
- (long long)remoteTogglePlayPause:(id)a0;
- (void)skipAheadByInterval:(double)a0;
- (void)skipBackByInterval:(double)a0;
- (void)updateTime:(double)a0 duration:(double)a1;

@end
