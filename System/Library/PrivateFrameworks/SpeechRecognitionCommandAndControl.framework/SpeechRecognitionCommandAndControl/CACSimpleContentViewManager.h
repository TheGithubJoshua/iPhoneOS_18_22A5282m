@class UIViewController;
@protocol CACViewController, CACSimpleContentViewManagerDelegate;

@interface CACSimpleContentViewManager : NSObject <CACContentViewManager>

@property (retain, nonatomic) UIViewController<CACViewController> *viewController;
@property (weak, nonatomic) id<CACSimpleContentViewManagerDelegate> contentViewManagerDelegate;
@property long long pendingDimmingTransactionID;
@property long long activeDimmingTransactionID;

- (void)hide;
- (BOOL)isOverlay;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (BOOL)isOutOfProcess;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)_hideAnimated:(BOOL)a0;
- (void)hideWithoutAnimation;
- (void)showViewControllerWithCreationHandler:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;

@end
