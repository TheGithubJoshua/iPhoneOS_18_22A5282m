@class UIView, NSString, NSArray, UIImage, SSLookupItemOffer, SKUIClientContext, UIButton, UIControl, UIImageView, NSMutableArray, UILabel, SKUIItemState;

@interface SKUIBannerView : UIView {
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    UIImageView *_iconImageView;
    UIButton *_itemOfferButton;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    UIImageView *_userRatingStarImageView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSArray *screenshotImages;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating;
@property (retain, nonatomic) SSLookupItemOffer *itemOffer;
@property (retain, nonatomic) SKUIItemState *itemState;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIControl *itemOfferButton;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_newDefaultLabel;
- (void)_reloadItemState;

@end
