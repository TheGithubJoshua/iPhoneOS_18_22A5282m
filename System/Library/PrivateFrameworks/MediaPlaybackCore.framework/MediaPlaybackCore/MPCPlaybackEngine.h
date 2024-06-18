@class NSXPCListenerEndpoint, MPAVRoutingController, MPCPlaybackIntent, MPCQueueController, NSError, _MPCMediaRemotePublisher, NSString, _MPCReportingController, MPProtocolProxy, MPAVRoute, MPCAudioSpectrumAnalyzer, _MPCMusicPlayerControllerServer, _MPCLeaseManager, _MPCPlaybackEnginePlayer, _MPCPlaybackEngineSessionManager, MPCPlaybackEngineEventStream, MPCWhiskyController;
@protocol _MPCPlaybackEngineEventObserving, MPCPlaybackEngineActiveItem, MPCPlaybackEngineDelegate, MPCVideoOutput, MPCPlaybackEngineInitializationParameters;

@interface MPCPlaybackEngine : NSObject <MPCQueueControllerDelegate, MPCQueueControllerBehaviorMusicDelegate, MPCQueueControllerBehaviorMusicSharePlayDelegate, MPCExplicitContentAuthorizationDelegate, MPAVRoutingControllerDelegate>

@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) BOOL scheduledPlaybackStatePreservation;
@property (nonatomic) BOOL needsUISnapshot;
@property (readonly, nonatomic) MPProtocolProxy<_MPCPlaybackEngineEventObserving> *eventObserver;
@property (readonly, nonatomic) _MPCPlaybackEnginePlayer *player;
@property (readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher;
@property (readonly, nonatomic) _MPCMusicPlayerControllerServer *musicPlayerControllerServer;
@property (readonly, nonatomic) _MPCPlaybackEngineSessionManager *sessionManager;
@property (retain, nonatomic) MPCQueueController *queueController;
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, nonatomic) _MPCReportingController *reportingController;
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager;
@property (readonly, nonatomic) id<MPCVideoOutput> videoOutput;
@property (readonly, copy, nonatomic) NSString *targetContentItemID;
@property (readonly, copy, nonatomic) id<MPCPlaybackEngineActiveItem> activeItem;
@property (retain, nonatomic) id swiftStorage;
@property (readonly, nonatomic) id<MPCPlaybackEngineInitializationParameters> initializationParameters;
@property (nonatomic, getter=isSystemMusicApplication) BOOL systemMusicApplication;
@property (nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;
@property (copy, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionOptions;
@property (nonatomic, getter=isAudioAnalyzerEnabled) BOOL audioAnalyzerEnabled;
@property (readonly, nonatomic) MPCAudioSpectrumAnalyzer *audioAnalyzer;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) MPAVRoute *pickedRoute;
@property (nonatomic, getter=isVocalAttenuationEnabled) BOOL vocalAttenuationEnabled;
@property (nonatomic) float vocalLevel;
@property (readonly, nonatomic) MPCWhiskyController *vocalAttenuationController;
@property (readonly, nonatomic, getter=isVocalAttenuationAvailable) BOOL vocalAttenuationAvailable;
@property (readonly, nonatomic) double currentAudioProcessingDelay;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, copy, nonatomic) NSString *engineID;
@property (weak, nonatomic) id<MPCPlaybackEngineDelegate> delegate;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported;
@property (nonatomic, getter=isVideoSupported) BOOL videoSupported;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) BOOL disableRepeat;
@property (nonatomic) BOOL disableShuffle;
@property (retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported;
@property (nonatomic, getter=isQueueHandoffSupported) BOOL queueHandoffSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preheatPlayback;

- (void)behavior:(id)a0 didReceiveSharedListeningEvent:(id)a1;
- (void)_updateUISnapshotIfNeeded;
- (void)reloadQueueForReason:(long long)a0 completion:(void (^)(NSError *))a1;
- (void)reportUserSeekFromTime:(double)a0 toTime:(double)a1;
- (double)mapUserTimeToPlaybackTime:(double)a0;
- (void)beginScanningWithDirection:(long long)a0 identifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (double)mapPlaybackTimeToUserTime:(double)a0;
- (void)initializeSwiftStack;
- (void)behavior:(id)a0 didEndSharePlaySessionWithReason:(long long)a1;
- (void)queueController:(id)a0 didIncrementVersionForSegment:(id)a1;
- (id)initWithParameters:(id)a0;
- (BOOL)skipWithDirectionShouldJumpToItemStart:(long long)a0;
- (id)initWithPlayerID:(id)a0;
- (void)removeEngineObserver:(id)a0;
- (void)_detectCrashLoopForSessionIdentifier:(id)a0 block:(id /* block */)a1;
- (void)start;
- (void)_screenBrightnessDidChangeNotification:(id)a0;
- (void)queueControllerDidChangeContents:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)restoreStateWithCompletion:(id /* block */)a0;
- (void)schedulePlaybackStatePreservation;
- (void)queueController:(id)a0 didDetectMismatchForActiveContentItemID:(id)a1 targetContentItemID:(id)a2;
- (void)routingController:(id)a0 pickedRouteDidChange:(id)a1;
- (void)behavior:(id)a0 didChangeShuffleType:(long long)a1;
- (void)behavior:(id)a0 didChangeRepeatType:(long long)a1;
- (void)addEngineObserver:(id)a0;
- (void)dealloc;
- (void)reportUserBackgroundedApplication;
- (BOOL)_shouldIgnorePlaybackSessionError:(id)a0;
- (void)queueController:(id)a0 didChangeTargetContentItemID:(id)a1;
- (void)requestAuthorizationForExplicitItem:(id)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)behavior:(id)a0 didChangeExplicitContentState:(long long)a1;
- (void)becomeActive;
- (void)_initializePlaybackStack;
- (void)loadSessionWithIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)behavior:(id)a0 didChangeActionAtQueueEnd:(long long)a1;

@end