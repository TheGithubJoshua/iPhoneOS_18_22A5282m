@class LPImageViewStyle, LPPadding, UIColor, CAMediaTimingFunction, LPVideoPlayButtonStyle;

@interface LPVideoViewStyle : NSObject

@property (readonly, nonatomic) LPVideoPlayButtonStyle *playButton;
@property (readonly, nonatomic) LPImageViewStyle *muteButton;
@property (readonly, retain, nonatomic) LPPadding *muteButtonPadding;
@property (nonatomic) double muteButtonOpacity;
@property (nonatomic) double muteButtonHighlightedOpacity;
@property (retain, nonatomic) UIColor *pulsingLoadIndicatorColor;
@property (nonatomic) double pulsingLoadIndicatorMaximumOpacity;
@property (nonatomic) double pulsingLoadIndicatorDuration;
@property (retain, nonatomic) CAMediaTimingFunction *pulsingLoadIndicatorTimingFunction;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0;

@end
