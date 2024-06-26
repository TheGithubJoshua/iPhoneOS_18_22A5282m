@class NSString, BluetoothDevice;

@interface BTSPairController : PSListController <UITextFieldDelegate> {
    BluetoothDevice *_device;
    NSString *_promptFormat;
    BOOL _dismissed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void)loadView;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)deviceUpdated:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)textDidChange:(id)a0;
- (void)doneButtonClicked:(id)a0;
- (void)emptySetter:(id)a0 specifier:(id)a1;
- (void)updatePrompt:(id)a0;

@end
