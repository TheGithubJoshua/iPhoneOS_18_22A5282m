@class _AVSimplePlayerLayerView, AVPlayerLayer;

@interface AVPictureInPicturePlayerLayerView : UIView {
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

- (void)detachPlayerLayer;
- (void)attachPlayerLayer;
- (void).cxx_destruct;

@end
