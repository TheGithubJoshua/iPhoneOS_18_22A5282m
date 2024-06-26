@class UIView;

@interface MTMPButton : UIButton {
    unsigned char _holding : 1;
    UIView *_hitTestDebugView;
}

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } easyTouchDefaultHitRectInsets;
@property (class, readonly, nonatomic) double easyTouchDefaultCharge;

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (nonatomic) double holdDelayInterval;
@property (readonly, nonatomic, getter=isHolding) BOOL holding;
@property (nonatomic) BOOL hitTestDebugEnabled;

+ (id)easyTouchButtonWithType:(long long)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)_supportsMacIdiom;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_delayedTriggerHold;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)_handleTouchUp;

@end
