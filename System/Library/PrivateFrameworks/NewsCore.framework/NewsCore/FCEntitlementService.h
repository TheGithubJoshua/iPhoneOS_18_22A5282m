@class NSTimer, NSMutableArray, NFMutexLock;
@protocol FCCoreConfigurationManager;

@interface FCEntitlementService : NSObject

@property (nonatomic) BOOL requestInProgress;
@property (retain, nonatomic) NSTimer *entitlementRequestTimer;
@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (nonatomic) long long entitlementRequestTimeoutDuration;

- (void)clearTimer;
- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (void)_performEntitlementWithIgnoreCache:(BOOL)a0 requestTimeoutDuration:(long long)a1 completion:(id /* block */)a2;
- (void)performEntitlementWithIgnoreCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)startTimerWithTimeoutDuration:(double)a0;

@end
