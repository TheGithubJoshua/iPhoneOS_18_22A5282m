@class _UIResilientRemoteViewContainerViewController, NSString, UIAlertController, NSObject;
@protocol OS_dispatch_semaphore;

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining> {
    UIAlertController *_alertController;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)setModalPresentationStyle:(long long)a0;
- (id)remoteViewController;
- (void)disconnectRoute;
- (void)_commonInitWithCompletion:(id /* block */)a0;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)_requiresCustomPresentationController;
- (void)_setChildViewController:(id)a0;
- (void)setCurrentOutputDeviceEnabled:(BOOL)a0;

@end
