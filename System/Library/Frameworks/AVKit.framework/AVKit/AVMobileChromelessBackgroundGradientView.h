@class CAGradientLayer;

@interface AVMobileChromelessBackgroundGradientView : UIView {
    CAGradientLayer *_backgroundGradientLayer;
}

@property (nonatomic, getter=isActive) BOOL active;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setUpLayersIfNeeded;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_updateGradientLayerState;

@end
