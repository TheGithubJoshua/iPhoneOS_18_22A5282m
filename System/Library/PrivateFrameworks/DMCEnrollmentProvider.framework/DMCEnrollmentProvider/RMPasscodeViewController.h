@class RMUIPasscodeViewModel;

@interface RMPasscodeViewController : PSListController

@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeModel;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_passcodeDetailValue:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForPasscodeSettings;

@end
