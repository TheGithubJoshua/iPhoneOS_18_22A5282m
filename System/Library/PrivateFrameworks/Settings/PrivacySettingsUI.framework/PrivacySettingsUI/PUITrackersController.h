@class ADTrackingTransparency, NSArray;

@interface PUITrackersController : PUITCCAccessController

@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency;
@property (retain, nonatomic) NSArray *appSpecifiers;

- (id)specifiers;
- (id)init;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)headerLinkWasTapped;
- (id)allowAsk:(id)a0;
- (BOOL)canChangeAllowAsk;
- (void)disableTCCForAllApps;
- (void)setAllowAsk:(id)a0 specifier:(id)a1;

@end
