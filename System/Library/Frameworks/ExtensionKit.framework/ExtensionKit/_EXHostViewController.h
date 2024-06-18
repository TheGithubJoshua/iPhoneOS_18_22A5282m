@class _EXHostSessionDriver, _EXHostViewControllerConfiguration, _EXExtensionProcess, UIView, UIViewController;
@protocol _EXHostViewControllerDelegate;

@interface _EXHostViewController : UIViewController <_EXHostViewControllerProtocol>

@property (retain) _EXHostSessionDriver *sessionDriver;
@property (retain) UIViewController *embededViewController;
@property (weak, nonatomic) id<_EXHostViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *placeholderView;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) UIViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) UIView *view;

- (id)init;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)configuration;
- (void)embedPlaceholder;
- (void)embedViewController:(id)a0;

@end
