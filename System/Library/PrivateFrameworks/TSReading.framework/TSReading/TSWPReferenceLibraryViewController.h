@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

@property (nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;

- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
