@class UILabel, WFOpacitySlider;

@interface WFOpacitySliderView : UIControl

@property (readonly, weak, nonatomic) WFOpacitySlider *slider;
@property (readonly, weak, nonatomic) UILabel *opacityLabel;
@property (readonly, nonatomic) double opacity;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reset;
- (void)didChangeOpacityValue:(id)a0;

@end
