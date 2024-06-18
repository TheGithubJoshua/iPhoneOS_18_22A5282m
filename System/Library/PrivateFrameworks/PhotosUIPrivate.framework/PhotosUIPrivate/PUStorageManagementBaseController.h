@class PSRootController, NSString, PSSpecifier, UIViewController;
@protocol PSController;

@interface PUStorageManagementBaseController : UIViewController <PSController> {
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBecomeActive;
- (void)willResignActive;
- (void)handleURL:(id)a0;
- (id)specifier;
- (void)suspend;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)parentController;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void)setParentController:(id)a0;
- (void)didLock;
- (void)showController:(id)a0;
- (void)didWake;
- (BOOL)canBeShownFromSuspendedState;
- (void)didUnlock;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)willUnlock;

@end
