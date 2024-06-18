@class UIImageView, UIImage;
@protocol ICDocCamPageContentViewTapDelegate;

@interface ICDocCamPageContentViewController : UIViewController

@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<ICDocCamPageContentViewTapDelegate> tapDelegate;

+ (double)leadingTrailingOffset:(long long)a0;

- (void)didReceiveMemoryWarning;
- (void)handleSingleTap:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
