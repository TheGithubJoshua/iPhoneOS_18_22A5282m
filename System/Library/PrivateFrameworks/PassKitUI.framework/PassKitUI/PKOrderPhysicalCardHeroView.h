@class UIImageView, PKPhysicalCardArtworkView;

@interface PKOrderPhysicalCardHeroView : UIView {
    UIImageView *_backgroundView;
}

@property (readonly, nonatomic) PKPhysicalCardArtworkView *artworkView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_backgroundImage;

@end