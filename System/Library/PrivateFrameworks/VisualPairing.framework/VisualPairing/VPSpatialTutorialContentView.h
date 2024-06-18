@class AVPlayerItem, AVPlayerLooper, AVQueuePlayer, AVPlayerLayer;

@interface VPSpatialTutorialContentView : UIView {
    int _mode;
    AVQueuePlayer *_playerStereo;
    AVQueuePlayer *_playerSpatial;
    AVPlayerLooper *_looperStereo;
    AVPlayerLooper *_looperSpatial;
    AVPlayerItem *_playerItemStereo;
    AVPlayerItem *_playerItemSpatial;
    AVPlayerLayer *_playerLayerStereo;
    AVPlayerLayer *_playerLayerSpatial;
    BOOL _playersPlaying;
    BOOL _playersStartTriggered;
    struct MediaContentStatus { BOOL playerReady; BOOL looperReady; } _spatialStatus;
    struct MediaContentStatus { BOOL playerReady; BOOL looperReady; } _stereoStatus;
}

- (id)initWithMode:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)setMode:(int)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)mode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(int)a1;
- (void)startPlayers;
- (void)stopPlayers;
- (void)initPlayerSpatial;
- (void)initPlayerStereo;
- (void)syncPlayersWithRate:(float)a0;
- (void)updatePlayersValuesBasedOnMode;

@end
