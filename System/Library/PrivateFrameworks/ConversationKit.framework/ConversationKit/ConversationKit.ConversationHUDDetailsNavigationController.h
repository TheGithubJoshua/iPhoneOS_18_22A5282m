@interface ConversationKit.ConversationHUDDetailsNavigationController : UINavigationController <CNKSceneVisibilityHandler> {
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ shouldHaveBackgroundMaterial;
    void /* unknown type, empty encoding */ detailsViewController;
}

@property (nonatomic) BOOL isOnScreen;

- (id)initWithCoder:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)tapDoneButton;

@end
