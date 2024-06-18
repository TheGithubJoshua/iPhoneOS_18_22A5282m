@class PowerUISmartChargeClient, _PMLowPowerMode;

@interface CCUILowPowerModuleViewController : CCUIMenuModuleViewController {
    _PMLowPowerMode *_lowPowerMode;
    PowerUISmartChargeClient *_smartChargeClient;
}

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (id)init;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (BOOL)isSelected;
- (id)glyphPackageDescription;
- (void)refreshState;
- (void)viewDidLoad;
- (void)_updateState;
- (void)reconfigureView;
- (void).cxx_destruct;
- (void)_observeSystemNotifications;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)glyphState;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (void)_unobserveSystemNotifications;
- (void)_updateForDarkerSystemColorsChange;
- (void)setLowPowerMode:(BOOL)a0;
- (id)_makeLocalizedMenuItem:(id)a0 handler:(id /* block */)a1;
- (void)_configureMenu;
- (BOOL)isEAconnected;
- (void)setMobileChargeMode:(BOOL)a0;
- (void)toggleLowPowerMode;
- (void)toggleMobileChargeMode;

@end
