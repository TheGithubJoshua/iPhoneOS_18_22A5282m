@class NSString;
@protocol AXCCGuidedAccessModuleViewControllerDelegate;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController

@property (copy, nonatomic) NSString *lastFetchedEffectiveApp;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateEnabledState;
- (BOOL)_isDeviceUnlocked;
- (id)_accessibilityControlCenterButtonIdentifier;
- (id)_accessibilityControlCenterButtonLabel;
- (BOOL)_guidedAccessAvailable;

@end
