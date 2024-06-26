@class NSString, PSSpecifier;

@interface PSGNfcController : PSListController <NFHardwareEventListener>

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) unsigned int hwState;
@property (nonatomic) BOOL restrictedFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)didChangeRadioState:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hardwareStateDidChange;
- (void)_refreshFooterForSpecifier:(id)a0;
- (void)_enableNfcRadio;
- (void)_disableNfcRadio;
- (void)_refreshNfcRadioStateSetting;
- (BOOL)_setNfcEnable:(BOOL)a0;
- (void)_updateHwStateChange;
- (id)nfcEnable;
- (void)setNfcEnable:(id)a0 specifier:(id)a1;

@end
