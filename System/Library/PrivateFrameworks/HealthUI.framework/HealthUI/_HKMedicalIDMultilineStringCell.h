@class NSString, UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)tintColorDidChange;
- (void)setupSubviews;
- (void)_updateTextColor;
- (void)setUpConstraints;

@end
