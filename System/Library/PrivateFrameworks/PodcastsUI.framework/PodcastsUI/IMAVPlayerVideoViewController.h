@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController

@property (weak, nonatomic) IMAVPlayer *im_player;

- (void)mediaItemDidChange;
- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (void)playbackSpeedDidChange;

@end
