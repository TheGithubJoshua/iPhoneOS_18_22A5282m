@interface WDProfileEditableTableViewCell : WDProfileTableViewCell

+ (double)notEditingTrailingEdgeMargin;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_textFieldDidChange:(id)a0;

@end
