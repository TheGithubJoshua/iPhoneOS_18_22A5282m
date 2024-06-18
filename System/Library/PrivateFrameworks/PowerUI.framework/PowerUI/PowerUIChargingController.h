@class NSDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int chargingStateNotification;
@property (retain, nonatomic) NSDictionary *stateDescriptions;
@property (nonatomic) unsigned long long currentControllerClientState;
@property (nonatomic) unsigned long long lastChargingStatus;

+ (id)sharedInstance;

- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;
- (BOOL)disableCharging;
- (BOOL)enableCharging;
- (id)readNumberForPreferenceKey:(id)a0;
- (void)resetState;
- (id)init;
- (struct PowerUIControllerChargingStatus { BOOL x0; BOOL x1; })lastChargeStatus;
- (void).cxx_destruct;
- (id)status;
- (BOOL)enableChargingWithClientState:(unsigned long long)a0;
- (BOOL)setChargingStatus:(BOOL)a0;
- (BOOL)shouldPriortizeDecisionForClientState:(unsigned long long)a0;
- (BOOL)disableChargingWithClientState:(unsigned long long)a0;
- (void)overrideLastChargingStatus;

@end
