@class FBSDisplayIdentity, NSString, SBFZStackParticipant, SBGestureDefaults;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager <SBFZStackParticipantDelegate> {
    FBSDisplayIdentity *_displayIdentity;
    SBGestureDefaults *_gestureDefaults;
    BOOL _multitaskingGesturesEnabled;
}

@property (retain, nonatomic) SBFZStackParticipant *accessibilityZStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)zStackParticipantDidChange:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateUserPreferences;
- (id)_init;
- (void)setSystemGesturesDisabledForAccessibility:(BOOL)a0;
- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x0; double x1; })a0 ignoringUCB:(BOOL)a1;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)_evaluateEnablement;
- (void).cxx_destruct;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)_initWithDisplayIdentity:(id)a0;

@end
