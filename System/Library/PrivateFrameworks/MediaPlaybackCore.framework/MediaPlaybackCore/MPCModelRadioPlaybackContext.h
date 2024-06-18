@class NSString, MPCPlaybackRequestEnvironment, MPModelRadioStation, MPCModelRadioContentReference, NSURL;
@protocol MPCContinueListeningRadioQueueProviding;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>

@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic) BOOL continueListeningStation;
@property (weak, nonatomic) id<MPCContinueListeningRadioQueueProviding> continueListeningQueueProvider;
@property (nonatomic) long long continueListeningMaxQueueReferences;
@property (nonatomic) long long continueListeningPrefetchThreshold;
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference;
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (copy, nonatomic) NSURL *stationURL;
@property (copy, nonatomic) NSString *stationPlaybackAuthorizationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)userIdentity;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)shuffleType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserIdentity:(id)a0;
- (long long)repeatType;
- (long long)queueEndAction;
- (id)descriptionComponents;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;

@end
