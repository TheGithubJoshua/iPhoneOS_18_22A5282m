@class NSString, UITextView;

@interface HKFullScreenTextViewController : UIViewController

@property (readonly) UITextView *textView;
@property (copy, nonatomic) NSString *detailText;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)description;
- (void)viewWillAppear:(BOOL)a0;
- (void)createTextView;

@end
