@class CSSiriAssertionMonitor, NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor;

+ (id)sharedInstance;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (id)fetchVoiceTriggerStats;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)_fetchAssertionMonitor;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (id)initWithAssertionMonitor:(id)a0;
- (void)notifyServiceConnectionLost;

@end
