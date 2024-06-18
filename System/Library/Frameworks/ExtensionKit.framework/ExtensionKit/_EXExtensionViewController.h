@class UIViewController, _EXViewControllerSceneConfiguration;

@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>

@property (readonly) UIViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (void)loadView;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)makeContentViewController;

@end
