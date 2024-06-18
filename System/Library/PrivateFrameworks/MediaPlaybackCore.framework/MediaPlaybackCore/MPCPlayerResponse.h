@class NSArray, MPCPlayerPath, UIView, MPCMediaRemoteController, MPCPlayerResponseTracklist;
@protocol MPCPlayerResponseBuilder, MPCVideoOutput, MPCVideoView;

@interface MPCPlayerResponse : MPResponse

@property (readonly, nonatomic) id<MPCPlayerResponseBuilder> builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIView<MPCVideoView> *videoView;
@property (retain, nonatomic) id<MPCVideoOutput> videoOutput;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic, getter=isSharedListeningSession) BOOL sharedListeningSession;

+ (id)builderProtocol;

- (id)play;
- (id)pause;
- (id)stop;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)description;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)a0;
- (id)createSharedSessionWithIdentity:(id)a0 intentHandler:(id /* block */)a1;
- (id)leaveSession;
- (id)createSharedSessionWithIntentHandler:(id /* block */)a0;
- (id)initWithRequest:(id)a0 middleware:(id)a1;

@end
