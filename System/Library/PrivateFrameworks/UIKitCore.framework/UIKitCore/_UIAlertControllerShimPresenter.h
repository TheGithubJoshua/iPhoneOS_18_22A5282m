@class NSString, UIAlertController, UIAlertView, _UIAlertControllerShimPresenterWindow, UIPopoverController, UIViewController;
@protocol UIPopoverControllerDelegate;

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;
    id<UIPopoverControllerDelegate> _popoverDelegate;
    UIViewController *_inPopoverViewController;
}

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) UIAlertView *legacyAlert;
@property (readonly, nonatomic) _UIAlertControllerShimPresenterWindow *window;
@property (weak, nonatomic) id<UIPopoverControllerDelegate> popoverDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_addPresenter:(id)a0;
+ (void)_cancelPendingTouchesIfAppropriateForWindow:(id)a0;
+ (id)_currentFullScreenAlertPresenters;
+ (void)_removePresenter:(id)a0;
+ (BOOL)_shouldPresentActionSheetsFullscreen;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_createWindowIfNecessaryWithScene:(id)a0;
- (void)_dismissAlertControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_popoverController;
- (void)_presentAlertControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_presentAlertControllerAnimated:(BOOL)a0 hostingScene:(id)a1 completion:(id /* block */)a2;
- (void)_presentAlertControllerFromBarButtonItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentAlertControllerFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 direction:(unsigned long long)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)_tearDownInPopoverViewController;

@end
