@class UIImageView, NSURL, UIImage;

@interface HUNCCameraPlayerPlaceholderContentViewController : UIViewController

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *notificationImage;
@property (nonatomic) BOOL shouldShowPlaceholderContent;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0;
- (void)updatePlaceholderImage:(id)a0;

@end
