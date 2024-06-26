@class UILabel, NSLayoutConstraint;

@interface WDSubtitleDateTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *baselineConstraint;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;
@property (retain, nonatomic) UILabel *dateTextLabel;

- (void)_updateForCurrentSizeCategory;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupSubviews;

@end
