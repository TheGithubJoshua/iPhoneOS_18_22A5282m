@class UIImage, UILabel, UIImageView;

@interface SKUIStarRatingView : UIView {
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}

@property (nonatomic) double elementSpacing;
@property (retain, nonatomic) UIImage *ratingStarsImage;
@property (readonly, nonatomic) UILabel *textLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
