@class NSString, _PXEditableNavigationTitleTextField;
@protocol PXEditableNavigationTitleViewDelegate;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate> {
    struct { BOOL textColor; } _needsUpdateFlags;
    BOOL _isPerformingUpdates;
    struct { BOOL validateNewText; BOOL didEndEditing; } _delegateRespondsTo;
}

@property (readonly, nonatomic) _PXEditableNavigationTitleTextField *textField;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) id<PXEditableNavigationTitleViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)_updateIfNeeded;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)endEditing;
- (void)dealloc;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)_textFieldTextDidChange:(id)a0;
- (void)_invalidateTextColor;
- (void)_updateTextColorIfNeeded;

@end
