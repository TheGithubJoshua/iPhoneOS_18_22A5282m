@class UILabel, UITextField, UIStackView;

@interface FPUIAuthenticationTextInputCell : UITableViewCell {
    UIStackView *_stackView;
}

@property (readonly, weak, nonatomic) UILabel *label;
@property (readonly, weak, nonatomic) UITextField *textField;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_isLargeTextTraitCollection:(id)a0;

@end
