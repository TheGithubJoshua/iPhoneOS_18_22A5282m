@class NSString;

@interface PSGAboutController : PSListController <PSListControllerURLHandler> {
    BOOL _firstViewDidAppear;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willBecomeActive;
- (void)willResignActive;
- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)willUnlock;
- (void)handleResourceDictionaryWhenAlreadyPresented:(id)a0;
- (id)deviceName:(id)a0;
- (void)setDeviceName:(id)a0 specifier:(id)a1;
- (void)updateDeviceNameSpecifierIfNeeded;

@end
