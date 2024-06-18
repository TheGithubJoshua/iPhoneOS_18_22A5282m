@interface TKVibrationRecorderProgressDotImageView : UIImageView

@property (nonatomic) double timeInterval;
@property (nonatomic) double duration;
@property (nonatomic) double previousPauseTimeInterval;
@property (nonatomic) double previousPauseDuration;
@property (nonatomic) double accessibilityFrameAdditionalHeight;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityValue;

@end
