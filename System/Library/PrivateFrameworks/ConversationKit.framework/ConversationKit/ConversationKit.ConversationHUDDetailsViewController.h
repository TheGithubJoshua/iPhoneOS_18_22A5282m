@interface ConversationKit.ConversationHUDDetailsViewController : UIViewController <CNKSceneVisibilityHandler> {
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ linkShareCoordinator;
    void /* unknown type, empty encoding */ detailsViewController;
    void /* unknown type, empty encoding */ peoplePickerViewController;
}

@property (nonatomic) void /* unknown type, empty encoding */ isOnScreen;

- (void)dismissPeoplePicker;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
