@class NSString, UITextField;

@interface UIPrintAccountInfoOption : UIPrintOption <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *jobAccountIDTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)summary;
- (void)dealloc;
- (BOOL)canDismiss;
- (BOOL)shouldShow;
- (void)changeJobAccountID:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)isJobAccountIDRequired;
- (id)printOptionTableViewCell;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (void)updateFromPrintInfo;

@end
