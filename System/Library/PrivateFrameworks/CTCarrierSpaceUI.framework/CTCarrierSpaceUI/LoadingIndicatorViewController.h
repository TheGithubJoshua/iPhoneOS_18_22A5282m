@class UILabel, NSString, UIActivityIndicatorView;

@interface LoadingIndicatorViewController : UIViewController

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *messageLabel;
@property (weak) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *messageText;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)a0 message:(id)a1;

@end
