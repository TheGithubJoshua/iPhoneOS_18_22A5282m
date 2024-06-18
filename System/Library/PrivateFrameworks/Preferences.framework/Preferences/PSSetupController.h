@class NSDictionary, UIViewController, PSRootController;
@protocol PSController;

@interface PSSetupController : PSRootController {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (void)dismissAnimated:(BOOL)a0;
- (void)handleURL:(id)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dismiss;
- (id)controller;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)parentController;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setParentController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)setupController;
- (void)popControllerOnParent;
- (BOOL)popupStyleIsModal;
- (void)pushControllerOnParentWithSpecifier:(id)a0;
- (void)statusBarWillChangeHeight:(id)a0;
- (BOOL)usePopupStyle;

@end
