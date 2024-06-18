@class UITextView, SBWindow, UIWindowScene;

@interface SBLogWindowController : UIViewController

@property (class, weak, nonatomic) UIWindowScene *windowScene;

@property (retain, nonatomic) SBWindow *logWindow;
@property (retain, nonatomic) UITextView *logTextView;

+ (id)sharedInstanceIfAvailable;
+ (id)sharedInstance;

- (void)show;
- (void)hide;
- (void)_createAndUpdateWindowIfNecessary;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
