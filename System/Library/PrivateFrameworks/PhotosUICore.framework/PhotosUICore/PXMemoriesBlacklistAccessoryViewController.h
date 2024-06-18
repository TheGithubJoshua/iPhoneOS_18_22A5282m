@class PXMemoriesBlacklistAccessoryViewSpec, NSArray, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;

- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)initWithAccessoryView:(id)a0 viewSpec:(id)a1;

@end
