@class BLSAssertion, NSString, SBDoNotDisturbStateMonitor, SBAlwaysOnPolicySettings;

@interface SBFocusModeAlwaysOnPolicy : NSObject <SBDoNotDisturbStateMonitorObserver, PTSettingsKeyObserver, SBAlwaysOnPolicy> {
    BLSAssertion *_alwaysOnDisabledAssertion;
    SBDoNotDisturbStateMonitor *_dndStateMonitor;
    SBAlwaysOnPolicySettings *_policySettings;
    BOOL _disableAlwaysOn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id analyticsPolicyValue;

- (void)_updateFromDNDState:(id)a0;
- (void)doNotDisturbStateMonitor:(id)a0 didUpdateToState:(id)a1;
- (void)_setDisableAlwaysOn:(BOOL)a0 dndState:(id)a1;
- (BOOL)_shouldDisableAlwaysOnForDNDState:(id)a0;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)activateAlwaysOnPolicy;

@end
