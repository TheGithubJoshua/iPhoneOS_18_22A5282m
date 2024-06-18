@interface OFUIViewController : UIViewController

+ (Class)viewClass;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;

@end
