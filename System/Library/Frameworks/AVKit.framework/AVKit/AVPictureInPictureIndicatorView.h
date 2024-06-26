@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView

@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;
@property (copy, nonatomic) NSString *customMessage;

- (void)_updateGeometry;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)_addIndicatorLayerIfNeeded;

@end
