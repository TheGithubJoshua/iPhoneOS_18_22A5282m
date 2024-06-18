@interface FeedbackCore.FBKActionSheetController : FBKPartialSheetNavigationController <FeedbackCore.FBKActionController> {
    void /* unknown type, empty encoding */ actionSheetController;
}

@property (nonatomic) BOOL dismissesOnAction;

- (id)initWithCoder:(id)a0;
- (void)addAction:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 actions:(id)a2;
- (void)addActionWithTitle:(id)a0 image:(id)a1 actionHandler:(id /* block */)a2;

@end
