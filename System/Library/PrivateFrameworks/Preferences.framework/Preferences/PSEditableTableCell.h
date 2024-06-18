@class NSString, UIColor, PSListController;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
    UIColor *_textColor;
    id _delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
}

@property (readonly, nonatomic) BOOL returnKeyTapped;
@property (weak, nonatomic) PSListController *controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setValue:(id)a0;
- (BOOL)canResignFirstResponder;
- (void)setDelegate:(id)a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEditing;
- (void)prepareForReuse;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (id)textField;
- (id)value;
- (id)_defaultTextColor;
- (void)setPlaceholderText:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (void)controlChanged:(id)a0;
- (BOOL)_cellIsEditing;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)endEditingAndSave;
- (BOOL)isTextFieldEditing;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;

@end
