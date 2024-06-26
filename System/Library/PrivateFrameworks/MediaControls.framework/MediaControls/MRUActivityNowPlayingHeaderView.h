@class MRUNowPlayingLabelView, MRUVisualStylingProvider;

@interface MRUActivityNowPlayingHeaderView : UIView

@property (readonly, nonatomic) MRUNowPlayingLabelView *labelView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly, nonatomic) double labelInset;

- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateVisibilty;

@end
