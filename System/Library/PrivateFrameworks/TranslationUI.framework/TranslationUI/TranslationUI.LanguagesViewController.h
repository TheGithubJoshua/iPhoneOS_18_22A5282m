@interface TranslationUI.LanguagesViewController : UIViewController {
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ showsCloseButton;
    void /* unknown type, empty encoding */ requireOnDevice;
    void /* unknown type, empty encoding */ selectionModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (void)closeActionWithSender:(id)a0;
- (void)updateSelectedTarget;

@end
