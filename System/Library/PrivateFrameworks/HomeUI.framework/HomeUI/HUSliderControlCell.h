@class NSArray, HUSimpleSliderControlView;

@interface HUSliderControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *sliderConstraints;
@property (retain, nonatomic) HUSimpleSliderControlView *sliderView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)allControlViews;
- (void)_updateSliderConstraints;

@end
