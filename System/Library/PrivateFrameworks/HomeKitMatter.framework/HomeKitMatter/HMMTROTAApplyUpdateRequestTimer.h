@class HMFTimer, HMMTRAccessoryServer, HMMTROTAProviderDelegate, NSString;

@interface HMMTROTAApplyUpdateRequestTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *updateTimer;
@property (weak, nonatomic) HMMTROTAProviderDelegate *otaProvider;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
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
- (id)initWithServer:(id)a0 otaProvider:(id)a1 queue:(id)a2;

@end
