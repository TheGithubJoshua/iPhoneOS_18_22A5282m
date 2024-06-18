@class UIImageView;

@interface NANowPlayingArtworkView : UIView

@property (retain, nonatomic) UIImageView *trackImageView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } artworkSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })artworkSizeForTitleViewWidth:(double)a0;
- (void)setTrackImage:(id)a0 animated:(BOOL)a1;

@end
