@class UITextField;

@interface CNPickerItemCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)endEditing;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)beginEditing;
- (void)setTextFieldHidden:(BOOL)a0;

@end
