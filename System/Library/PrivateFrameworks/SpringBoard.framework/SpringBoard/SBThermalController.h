@class SBSecurityDefaults, NSString, NSUUID, NSHashTable, SBThermalDefaults, SBExternalWifiDefaults;

@interface SBThermalController : NSObject <SBFThermalBlockProvider> {
    NSUUID *_samplingToken;
    int _hotToken;
    unsigned long long _hotLevel;
    int _coldToken;
    unsigned long long _coldLevel;
    int _sunToken;
    unsigned long long _sunLevel;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic, getter=isInSunlight) BOOL inSunlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logThermalEvent:(id)a0;

- (id)init;
- (void)startListeningForThermalEvents;
- (void)removeThermalObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isBlocked;
- (void)_respondToCurrentThermalCondition;
- (BOOL)isThermalBlocked;
- (void)addThermalObserver:(id)a0;
- (void)dealloc;
- (void)_updateThermalJetsamCPUSamplingState;
- (void)_setBlocked:(BOOL)a0;

@end
