@class NSString, HMMLogEvent;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric;

- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
