@interface DADiagnosticsNotesController : PSDetailController

- (id)init;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelButtonPressed;
- (void)_enableButtons;
- (void)_disableButtons;
- (void)_okButtonPressed;

@end
