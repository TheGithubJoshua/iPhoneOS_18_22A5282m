@class NSString, UIImageView, UIView, AVMicaPackage;
@protocol AVMobileVolumeChromlesButtonControlDelegate;

@interface AVMobileVolumeChromelessButtonControl : UIControl {
    struct CGPoint { double x; double y; } _startPoint;
    BOOL _hasStartedPanning;
}

@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *micaPackageContainerView;
@property (retain, nonatomic) NSString *volumeIconState;
@property (weak) id<AVMobileVolumeChromlesButtonControlDelegate> delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_volumeControlButtonDidEndPanning;
- (void)_volumeControlButtonPanningDidContinueWithXDelta:(double)a0;
- (id)_imageNameForMicaPackageState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_volumeControlButtonDidBeginPanning;
- (void)_updateMicaPackage:(id)a0;

@end
