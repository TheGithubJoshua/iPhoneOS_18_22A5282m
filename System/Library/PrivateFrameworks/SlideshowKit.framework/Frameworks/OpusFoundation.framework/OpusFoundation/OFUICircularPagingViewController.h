@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>

@property (retain, nonatomic) OFUICircularPagingView *circularPagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)circularPagingViewClass;

- (id)initWithCoder:(id)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)init;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
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
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)circularPagingViewDidMoveBackward:(id)a0;
- (void)circularPagingViewDidMoveForward:(id)a0;

@end
