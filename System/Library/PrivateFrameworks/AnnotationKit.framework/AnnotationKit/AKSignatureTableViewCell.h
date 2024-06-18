@class UIImageView, UILabel, AKSignature;

@interface AKSignatureTableViewCell : UITableViewCell

@property (retain, nonatomic) AKSignature *signature;
@property (retain, nonatomic) UIImageView *signatureImageView;
@property (retain, nonatomic) UILabel *signatureLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_commonInit;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)_setImageFromSignature;
- (void)_setLabelFromSignature;

@end
