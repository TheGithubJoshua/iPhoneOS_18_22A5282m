@class UILabel, UITextView;

@interface LargeTextExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
