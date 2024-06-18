@class SBLockStateAggregator, NSMutableDictionary, NSMutableSet, SBLockScreenManager;

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;

- (id)init;
- (id)initWithLockScreenManager:(id)a0 lockStateAggregator:(id)a1;
- (BOOL)_isDeviceUILocked;
- (void)_hardwareButtonPressed:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPlaySoundForNotificationRequest:(id)a0;
- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void)playSoundIfPossibleForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void)_lockStateChanged:(id)a0;
- (void)stopSoundForNotificationRequest:(id)a0;
- (void)_killSounds;

@end
