@class UIView;

@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}

@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL isFullscreenViewController;

- (long long)positionForBar:(id)a0;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (void)layoutViews;
- (void)dealloc;
- (void)p_statusBarWillChange:(id)a0;

@end
