@class SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, NSString, SBProximitySettings, SBProximityTouchHandlingController;

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate> {
    SBProximityTouchHandlingController *_proxTouchHandlingController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    unsigned long long _timesEnabledWithObjectInProximity;
    unsigned long long _touchesReceivedWithObjectInProximity;
    BOOL _objectInProximity;
}

@property (retain, nonatomic, getter=_proximitySettings, setter=_setProximitySettings:) SBProximitySettings *proximitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (void)windowSceneDidConnect:(id)a0;
- (void)didHitAllowedRegion:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)a0;
- (void)_absorbTouchesBelowStatusBarHeight;
- (id)_createNewEnablementCondition;
- (void)_absorbTouchesFullScreen;
- (void)dealloc;
- (void)_stopAbsorbingTouches;
- (id)initWithConfiguration:(id)a0 touchHandlingController:(id)a1;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)a0;
- (void)condition:(id)a0 enablementDidChange:(BOOL)a1;

@end
