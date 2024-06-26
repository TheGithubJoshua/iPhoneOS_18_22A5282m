@class NSString, _SFPasswordViewController;

@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize> {
    BOOL _processingSceneDidChange;
}

@property (retain, nonatomic) _SFPasswordViewController *autofillVC;
@property (nonatomic) BOOL presentedAutofill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)presentViewController:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_localAuthenticationUIDismissed;
- (void)_sceneDidChange;
- (void)presentAutofillVCWithAnimation:(BOOL)a0;
- (void)_localAuthenticationUIPresented;
- (void)_deviceWillLock:(id)a0;
- (BOOL)_formSheetObeysContentContainerSize;
- (void)passwordViewControllerDidFinish:(id)a0;
- (void)presentSelfWithAnimation:(BOOL)a0;
- (BOOL)shouldPresentAsPopover;

@end
