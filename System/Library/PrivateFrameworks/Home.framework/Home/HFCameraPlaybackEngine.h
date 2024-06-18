@class NADelegateDispatcher, HFCameraPlaybackEngineCache, NSUUID, NSDate, HMHome, NSMapTable, HFCameraAnalyticsCameraClipPlaybackSessionEvent, HMCameraClipManager, HMCameraClip, AVPlayer, HFCameraPlaybackPosition, NSString, HMCameraSource, NSArray, NSError, HMCameraProfile;
@protocol HFCameraClipPlaying, HFCameraLiveStreamControlling, HFCameraClipScrubbing;

@interface HFCameraPlaybackEngine : NSObject <HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>

@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCameraLiveStreamControlling> liveStreamController;
@property (readonly, nonatomic) id<HFCameraClipScrubbing> clipScrubber;
@property (readonly, nonatomic) NSMapTable *observerStates;
@property (readonly, nonatomic) NADelegateDispatcher *observerDispatcher;
@property (nonatomic) unsigned long long playbackContentType;
@property (nonatomic) unsigned long long engineMode;
@property (copy, nonatomic) NSDate *lastRequestedClipPlaybackDate;
@property (nonatomic) BOOL wantsToPlay;
@property (nonatomic) unsigned long long timeControlStatus;
@property (retain, nonatomic) NSError *playbackError;
@property (retain, nonatomic) HMCameraSource *liveCameraSource;
@property (nonatomic) unsigned long long scrubbingInProgressCount;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (nonatomic) long long lastPlayerTimeControlStatus;
@property (retain, nonatomic) HFCameraAnalyticsCameraClipPlaybackSessionEvent *playbackSessionEvent;
@property (nonatomic) unsigned long long playbackRetryAttempts;
@property (retain, nonatomic) HFCameraPlaybackEngineCache *eventCache;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (retain, nonatomic) NSUUID *notificationCenterClipUUID;
@property (readonly, nonatomic) id<HFCameraClipPlaying> clipPlayer;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (nonatomic) unsigned long long timelineState;
@property (nonatomic, getter=isUserScrubbing) BOOL userScrubbing;
@property (readonly, nonatomic) HMCameraClip *currentClip;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic, getter=isStreamAudioEnabled) BOOL streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic) BOOL prefersAudioEnabled;
@property (readonly, nonatomic) BOOL shouldDisplayVolumeControls;
@property (nonatomic, getter=isPictureInPictureModeActive) BOOL pictureInPictureModeActive;
@property (nonatomic) BOOL shouldBypassVideoFetchRequest;
@property (nonatomic) BOOL shouldBypassHighQualityScrubbing;
@property (nonatomic) unsigned long long scrubbingSpeed;
@property (readonly, nonatomic) BOOL hasRecordingEvents;
@property (readonly, nonatomic) BOOL isCameraPortraitMode;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findClipPositionForDate:(id)a0 inEvents:(id)a1 options:(unsigned long long)a2;
+ (unsigned long long)hf_indexOfClipForDate:(id)a0 inEvents:(id)a1 enumerationOptions:(unsigned long long)a2 searchOptions:(unsigned long long)a3;

- (void)updateConfiguration:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)play;
- (void)beginScrubbing;
- (void)pause;
- (id)initWithConfiguration:(id)a0;
- (void)endScrubbing;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDebugDescription;
- (void)recordingEventManager:(id)a0 didRemoveRecordingEventsWithUUIDs:(id)a1;
- (void)recordingEventManager:(id)a0 didUpdateRecordingEvents:(id)a1;
- (void)streamControllerStateDidUpdate:(id)a0;
- (BOOL)isLiveStreaming;
- (void)addObserver:(id)a0 withOptions:(id)a1;
- (id)engineModeDescription;
- (void)fetchCameraClipForNotificationUUID:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchCameraClipForUUID:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchCameraEventsWithCompletion:(id /* block */)a0;
- (id)findClipPositionForDate:(id)a0;
- (id)firstOfTheDayClipForDate:(id)a0;
- (BOOL)isFirstEventOfTheDay:(id)a0;
- (BOOL)isLiveStreamPlaying;
- (void)modifyPlaybackFromSender:(id)a0 usingBlock:(id /* block */)a1;
- (void)startPlaybackAtDate:(id)a0 withClip:(id)a1;
- (id)timeControlStatusDescription;
- (id)timelineStateDescription;
- (void)updateLiveStreamForCameraProfile:(id)a0;
- (void)updatePlaybackPositionToDate:(id)a0 usingClip:(id)a1;
- (id)_derivedPlaybackError;
- (unsigned long long)_derivedTimeControlStatus;
- (void)_setMicrophoneEnabled:(BOOL)a0 notifyObservers:(BOOL)a1;
- (void)_setPlayerVolume:(float)a0 notifyObservers:(BOOL)a1;
- (void)_setStreamAudioEnabled:(BOOL)a0 notifyObservers:(BOOL)a1;
- (void)_setupClipPlayerWithClipManager:(id)a0;
- (void)_setupLiveStreamController:(id)a0;
- (void)_setupTimeObservationForObserver:(id)a0;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)a0;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)a0 rebuildClipPlayerIfNeeded:(BOOL)a1;
- (void)_updateStateForRequestedPlaybackPosition:(id)a0 notifyObservers:(BOOL)a1;
- (void)clipPlayer:(id)a0 didUpdateError:(id)a1 isFatal:(BOOL)a2;
- (void)clipPlayer:(id)a0 didUpdateMuted:(BOOL)a1;
- (void)clipPlayer:(id)a0 didUpdateTimeControlStatus:(long long)a1;
- (void)clipPlayerDidPlayToEndTime:(id)a0;
- (id)findClipPositionForDate:(id)a0 options:(unsigned long long)a1;
- (void)startPlaybackForCurrentClip;

@end