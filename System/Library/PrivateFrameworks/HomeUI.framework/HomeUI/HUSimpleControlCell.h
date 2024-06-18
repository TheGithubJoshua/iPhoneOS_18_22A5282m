@class NSArray, UIView;
@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *controlViewConstraints;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)allControlViews;
- (void)_updateSliderConstraints;

@end
