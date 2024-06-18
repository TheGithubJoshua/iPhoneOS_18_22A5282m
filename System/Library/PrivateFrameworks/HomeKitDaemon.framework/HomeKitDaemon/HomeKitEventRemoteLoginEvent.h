@class NSString, AWDHomeKitRemoteLogin;

@interface HomeKitEventRemoteLoginEvent : HMMLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>

@property (readonly, nonatomic) AWDHomeKitRemoteLogin *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
