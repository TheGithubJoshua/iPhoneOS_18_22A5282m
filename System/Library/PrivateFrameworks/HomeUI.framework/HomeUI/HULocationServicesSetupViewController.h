@class OBBoldTrayButton, OBLinkTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HULocationServicesSetupViewController : OBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBBoldTrayButton *enableLocationServicesButton;
@property (retain, nonatomic) OBLinkTrayButton *disableLocationServicesButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_enableOrDisableLocationServices:(id)a0;
- (id)hu_preloadContent;
- (Class)onboardingFlowClass;

@end
