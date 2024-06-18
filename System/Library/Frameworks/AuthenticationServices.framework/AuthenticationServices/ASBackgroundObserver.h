@class UIViewController;

@interface ASBackgroundObserver : NSObject

@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)_hostDidEnterBackground:(id)a0;
- (id)initWithViewController:(id)a0 block:(id /* block */)a1;

@end
