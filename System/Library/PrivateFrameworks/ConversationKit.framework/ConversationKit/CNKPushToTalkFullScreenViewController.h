@interface CNKPushToTalkFullScreenViewController : UIViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ conversationControlsManager;
    void /* unknown type, empty encoding */ pttView;
    void /* unknown type, empty encoding */ cancellables;
}

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithConversationControlsManager:(id)a0;

@end
