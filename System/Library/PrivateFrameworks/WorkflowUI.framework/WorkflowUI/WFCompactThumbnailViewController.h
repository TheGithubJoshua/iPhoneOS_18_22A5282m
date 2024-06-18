@protocol WFCompactThumbnailViewControllerDelegate;

@interface WFCompactThumbnailViewController : UIViewController

@property (readonly, nonatomic) unsigned long long preferredContentMode;
@property (readonly, nonatomic) BOOL contentHeightLikelyToChange;
@property (weak, nonatomic) id<WFCompactThumbnailViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (double)contentHeightForWidth:(double)a0;
- (void)invalidateContentSize;

@end
