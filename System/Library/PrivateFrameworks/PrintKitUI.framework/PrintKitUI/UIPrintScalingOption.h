@class NSString, UITextField, UIStepper;

@interface UIPrintScalingOption : UIPrintOption <UITextFieldDelegate>

@property (retain, nonatomic) UIStepper *scaleStepper;
@property (retain, nonatomic) UITextField *scaleTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dismissKeyboard;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textField:(id)a0 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 suggestedActions:(id)a2;
- (BOOL)keyboardShowing;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)paperScaleStepperChanged:(id)a0;
- (id)printOptionTableViewCell;
- (void)printPanelDidChangeSize;
- (void)saveScaleValueToPrintInfo:(long long)a0;
- (void)updateFromPrintInfo;

@end
