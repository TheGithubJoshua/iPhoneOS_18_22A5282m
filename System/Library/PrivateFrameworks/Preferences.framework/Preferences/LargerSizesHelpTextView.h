@class UILabel;

@interface LargerSizesHelpTextView : UIView <PSHeaderFooterView> {
    UILabel *_helpLabel;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
