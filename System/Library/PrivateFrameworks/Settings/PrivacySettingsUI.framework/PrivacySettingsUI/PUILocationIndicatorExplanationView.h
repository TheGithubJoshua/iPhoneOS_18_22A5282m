@class UIImageView, UILabel;

@interface PUILocationIndicatorExplanationView : UIView <PSHeaderFooterView> {
    UIImageView *_activeIcon;
    UILabel *_activeLabel;
    UIImageView *_recentIcon;
    UILabel *_recentLabel;
    UILabel *_explanationLabel;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;
- (id)generalExplanationItemString;

@end
