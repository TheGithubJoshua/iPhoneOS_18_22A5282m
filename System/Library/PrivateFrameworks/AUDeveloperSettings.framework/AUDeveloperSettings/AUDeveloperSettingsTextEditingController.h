@class NSString;

@interface AUDeveloperSettingsTextEditingController : PSListController <UITextFieldDelegate> {
    NSString *_identifier;
    BOOL _keyboardShownOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (id)getValue:(id)a0;
- (void)suspend;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)textDidChange:(id)a0;
- (void)setTrainName:(id)a0;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)saveEditedValue:(id)a0 specifier:(id)a1;
- (void)setBuildName:(id)a0;

@end
