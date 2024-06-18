@class HMFTimer, HMMTRAccessoryServer, NSString, NSNumber;

@interface HMMTROTAAnnounceTimer : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *announceTimer;
@property (retain, nonatomic) NSNumber *nodeId;
@property (retain, nonatomic) NSNumber *endpoint;
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
- (id)initWithServer:(id)a0 nodeId:(id)a1 endpoint:(id)a2 queue:(id)a3;

@end
