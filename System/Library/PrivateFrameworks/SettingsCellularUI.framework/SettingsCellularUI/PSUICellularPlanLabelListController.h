@class NSArray, NSString, UITextField, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate>

@property (retain, nonatomic) NSArray *predefinedLabels;
@property (retain, nonatomic) NSString *validatedCustomLabelText;
@property (weak, nonatomic) UITextField *textField;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)textFieldDidEndEditing:(id)a0;
- (void)dismissKeyboard;
- (id)getLogger;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)willMoveToParentViewController:(id)a0;

@end
