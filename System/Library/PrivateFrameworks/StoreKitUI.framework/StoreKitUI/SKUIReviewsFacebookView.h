@class SKUIColorScheme, NSArray, SKUIClientContext, UIImageView, UILabel, UIView, UIButton;

@interface SKUIReviewsFacebookView : UIView {
    SKUIClientContext *_clientContext;
    UILabel *_friendsLabel;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UIView *_separatorView;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSArray *friendNames;
@property (readonly, nonatomic) UIButton *likeToggleButton;
@property (nonatomic, getter=isUserLiked) BOOL userLiked;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)_composedStringForNames:(id)a0 userLiked:(BOOL)a1;
- (void)_reloadFriendNamesLabel;
- (void)_reloadLikeButtonState;
- (id)initWithClientContext:(id)a0;

@end
