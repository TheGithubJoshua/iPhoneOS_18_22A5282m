@class NSString, UILabel, NSMutableArray, NSLayoutConstraint;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *detailLabelLastBaselineConstraint;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;

- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)setDetailTextWithBullets:(id)a0;

@end
