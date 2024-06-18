@class NSURL, ICAttachment, NSSNewsViewController;

@interface ICNewsViewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSSNewsViewController *newsViewController;

- (id)initWithURL:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
