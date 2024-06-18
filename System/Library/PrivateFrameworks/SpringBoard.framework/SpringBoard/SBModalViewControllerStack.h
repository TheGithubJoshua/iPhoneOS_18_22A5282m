@class _SBModalViewControllerStackTransition, NSArray, NSMutableArray, UIViewController;
@protocol SBModalViewControllerStackDelegate;

@interface SBModalViewControllerStack : NSObject {
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    NSMutableArray *_pendingTransitions;
}

@property (weak, nonatomic) id<SBModalViewControllerStackDelegate> delegate;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *topViewController;

- (id)viewControllers;
- (void)_removeViewController:(id)a0 completion:(id /* block */)a1;
- (void)_noteDidPresentViewController:(id)a0;
- (void)_noteWillPresentViewController:(id)a0;
- (void)addViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_popNextPendingTransition;
- (void)_noteWillDismissViewController:(id)a0 animated:(BOOL)a1;
- (void)_removePendingTransition:(id)a0 forSuccess:(BOOL)a1;
- (void)removeViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)topViewController;
- (void).cxx_destruct;
- (void)_addViewController:(id)a0 completion:(id /* block */)a1;
- (void)_setCurrentTransition:(id)a0;
- (id)initWithPresentingViewController:(id)a0;
- (void)_noteDidDismissViewController:(id)a0;
- (void)_queuePendingTransition:(id)a0;
- (void)_performPendingTransitionIfNecessary;
- (void)removeViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_addPendingTransition:(id)a0;

@end
