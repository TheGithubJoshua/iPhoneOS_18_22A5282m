@class NSArray, NSDictionary, NSObject, NSMutableArray, NSMutableSet, NWNetworkOfInterestManager, AMSPromise;
@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSPromise *_currentInvestigation;
}

@property (class, readonly, nonatomic) AMSNetworkQualityInquiry *sharedInstance;
@property (class, readonly, nonatomic) NSDictionary *lastConnectionReport;

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

+ (BOOL)isEntitled;
+ (void)updateLastConnectionReportWithTask:(id)a0;
+ (id)reportForTask:(id)a0 fromReports:(id)a1;

- (void)drainKnownNetworksReadyHandlers;
- (id)init;
- (void)performWhenKnownNetworksReady:(id /* block */)a0;
- (void)didStopTrackingNOI:(id)a0;
- (void)didStartTrackingNOI:(id)a0;
- (void).cxx_destruct;
- (BOOL)areKnownNetworksReady;
- (void)didStopTrackingAllNOIs:(id)a0;
- (id)investigateNetworks;
- (void)dealloc;

@end
