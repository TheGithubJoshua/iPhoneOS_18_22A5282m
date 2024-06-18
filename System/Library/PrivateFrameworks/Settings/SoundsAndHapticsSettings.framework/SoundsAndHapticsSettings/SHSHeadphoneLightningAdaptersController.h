@class ADASManager;

@interface SHSHeadphoneLightningAdaptersController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;

- (id)specifiers;
- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)getConnectedToHeadphonesEnabled;
- (void)confirmForgetLightningAdaptersAction;
- (void)deleteAllLightningAdapterData;
- (void)setConnectedToHeadphonesEnabled:(id)a0 forSpecifier:(id)a1;

@end
