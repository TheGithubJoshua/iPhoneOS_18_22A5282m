@class SiriContextOverride, SASSystemState;

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (BOOL)isPad;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)siriIsRestricted;
- (BOOL)accessibilityShortcutEnabled;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (id)lockStateMonitor;
- (BOOL)isConnectedToCarPlay;
- (void).cxx_destruct;
- (BOOL)deviceIsBlocked;
- (void)setLockStateMonitor:(id)a0;
- (BOOL)siriIsSupported;
- (BOOL)siriIsEnabled;
- (BOOL)smartCoverClosed;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)carDNDActive;
- (id)currentSpokenLanguageCode;
- (id)initWithSystemState:(id)a0 contextOverride:(id)a1;
- (BOOL)isConnectedToTrustedCarPlay;

@end
