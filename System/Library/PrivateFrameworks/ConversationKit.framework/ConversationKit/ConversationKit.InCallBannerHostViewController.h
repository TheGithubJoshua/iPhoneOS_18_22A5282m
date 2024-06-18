@interface ConversationKit.InCallBannerHostViewController : UIViewController {
    void /* unknown type, empty encoding */ inCallBannerDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ controlsType;
    void /* unknown type, empty encoding */ notice;
    void /* unknown type, empty encoding */ captureGroupName;
    void /* unknown type, empty encoding */ conversationControlsViewController;
    void /* unknown type, empty encoding */ isDismissed;
    void /* unknown type, empty encoding */ needsMenuContainerView;
    void /* unknown type, empty encoding */ isPresentationManagedBySpringBoard;
    void /* unknown type, empty encoding */ prefersControlsHidden;
}

@property (nonatomic, readonly) BOOL menuPresented;

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
