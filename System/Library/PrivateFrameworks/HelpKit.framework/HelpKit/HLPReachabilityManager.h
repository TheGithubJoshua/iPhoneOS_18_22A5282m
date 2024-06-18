@class NSString, HLPReachability;
@protocol HLPReachabilityManagerDelegate;

@interface HLPReachabilityManager : NSObject {
    BOOL _notifying;
    BOOL _hostActive;
}

@property (nonatomic) BOOL reachabilityInitialized;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL internetActive;
@property (weak, nonatomic) id<HLPReachabilityManagerDelegate> delegate;
@property (retain, nonatomic) HLPReachability *internetReachability;
@property (retain, nonatomic) HLPReachability *hostReachability;
@property (retain, nonatomic) NSString *hostName;

+ (id)defaultManager;

- (id)init;
- (void)stopNotifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reachabilityChanged:(id)a0;
- (void)startNotifier;
- (BOOL)isNetworkError:(id)a0;

@end
