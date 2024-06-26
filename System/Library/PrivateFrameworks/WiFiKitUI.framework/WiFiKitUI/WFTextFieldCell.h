@class UIStackView, NSString, UITextField, UILabel, NSLayoutConstraint;

@interface WFTextFieldCell : UITableViewCell <UITextFieldDelegate>

@property (weak, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (weak, nonatomic) NSLayoutConstraint *labelWidthConstraint;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ returnKeyHandler;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL hideLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copy:(id)a0;
- (void)setAccessoryType:(long long)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)awakeFromNib;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (double)_verticalPadding;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)textFieldDidChange:(id)a0;
- (void)_adjustStackViewPadding;
- (void)_updateStackViewForTraitCollection;
- (void)textFieldDidEndEditingExit:(id)a0;

@end
