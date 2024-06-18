@class NSString, UIView;
@protocol PHContentUnavailable;

@interface PHViewController : UIViewController

@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic) BOOL contentUnavailable;
@property (retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView;
@property (copy, nonatomic) NSString *contentUnavailableViewTitle;

- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentUnavailable:(BOOL)a0 animated:(BOOL)a1;
- (void)makeUIForDefaultPNG;

@end
