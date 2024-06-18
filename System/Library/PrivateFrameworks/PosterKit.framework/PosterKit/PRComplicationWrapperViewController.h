@class PRComplicationDescriptor, PREditingMinusCloseBoxButton, UIView, CHUISWidgetHostViewController, BSUIVibrancyConfiguration;
@protocol PRComplicationWrapperViewControllerDelegate;

@interface PRComplicationWrapperViewController : UIViewController {
    UIView *_backgroundView;
    PREditingMinusCloseBoxButton *_removeButton;
}

@property (readonly, nonatomic) PRComplicationDescriptor *complicationDescriptor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) CHUISWidgetHostViewController *widgetHostViewController;
@property (weak, nonatomic) id<PRComplicationWrapperViewControllerDelegate> delegate;
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;

- (void)_tapGestureRecognized:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithComplicationDescriptor:(id)a0;
- (void)_removeButtonTapped;

@end
