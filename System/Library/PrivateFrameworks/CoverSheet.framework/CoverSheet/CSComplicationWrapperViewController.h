@class CHUISWidgetHostViewController, UIView;

@interface CSComplicationWrapperViewController : UIViewController

@property (retain, nonatomic) UIView *dimmingView;
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithWidgetHostViewController:(id)a0;

@end
