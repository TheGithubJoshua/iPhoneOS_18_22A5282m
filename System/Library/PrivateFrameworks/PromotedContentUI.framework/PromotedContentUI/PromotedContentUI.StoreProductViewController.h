@interface PromotedContentUI.StoreProductViewController : UIViewController <APPCMetricsInteractionPresentationDelegate, SKStoreProductViewControllerDelegatePrivate> {
    void /* unknown type, empty encoding */ actionResult;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ adamIdentifier;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ storeProductViewController;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)viewControllerToPresentFrom;
- (id)initWithCoder:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
