@class DCCircularProgressView, UIActivityIndicatorView, NSProgress, UILabel;
@protocol DCProgressViewControllerDelegate;

@interface DCProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) DCCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (weak, nonatomic) id<DCProgressViewControllerDelegate> progressDelegate;

- (id)initWithDelegate:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;

@end
