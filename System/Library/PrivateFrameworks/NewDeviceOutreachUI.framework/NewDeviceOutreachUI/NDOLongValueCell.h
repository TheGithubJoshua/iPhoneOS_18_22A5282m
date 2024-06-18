@class UILabel, NSArray, UIStackView;

@interface NDOLongValueCell : PSTableCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConstraints;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
