@class BCSBusinessItem, UIImageView;
@protocol BCBrandedHeaderViewControllerDelegate;

@interface BCBrandedHeaderViewController : UIViewController

@property (readonly, nonatomic) BCSBusinessItem *businessItem;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (weak, nonatomic) id<BCBrandedHeaderViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithBusinessItem:(id)a0;
- (void)_fetchLogo;

@end
