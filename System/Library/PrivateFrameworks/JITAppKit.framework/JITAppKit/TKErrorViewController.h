@class NSString, UILabel;

@interface TKErrorViewController : UIViewController {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *message;

+ (id)viewControllerForMessage:(id)a0;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
