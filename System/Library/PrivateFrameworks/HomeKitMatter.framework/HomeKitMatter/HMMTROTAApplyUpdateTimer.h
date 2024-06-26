@class HMFTimer, HMMTRAccessoryServer, HMMTROTAProviderDelegate, NSString, NSNumber;

@interface HMMTROTAApplyUpdateTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *updateTimer;
@property (retain, nonatomic) NSNumber *expectedVersion;
@property (weak, nonatomic) HMMTROTAProviderDelegate *otaProvider;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
@property (nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)stop;
- (void)start;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 otaProvider:(id)a1 newVersion:(id)a2 delay:(id)a3 queue:(id)a4;

@end
