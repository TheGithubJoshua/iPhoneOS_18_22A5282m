@class NSMutableArray;
@protocol WFBlacklistNetwork;

@interface WFBlackListNode : NSObject {
    NSMutableArray *_blacklistMetrics;
}

@property (retain) id<WFBlacklistNetwork> networkDelegate;
@property (retain) NSMutableArray *blacklistTriggers;
@property (retain) NSMutableArray *blacklistedStatesCurrent;
@property (retain) NSMutableArray *blacklistedStatesHistory;
@property BOOL enterprisePolicy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_copyCreateBlacklistedState:(unsigned long long)a0 reason:(unsigned long long)a1 reasonData:(long long)a2;
- (void)addBlacklistTrigger:(unsigned long long)a0 reasonData:(long long)a1 bssid:(id)a2;
- (void)addBlacklistedState:(unsigned long long)a0 reason:(unsigned long long)a1 reasonData:(long long)a2;
- (void)addBlacklistedStateHistory:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2 reasonData:(long long)a3;
- (BOOL)containsNetwork:(id)a0;
- (BOOL)hasBlacklistedState:(unsigned long long)a0;
- (id)initWithBlacklistNetwork:(id)a0;
- (void)networkPruned;
- (void)processBlacklistedStateMetric:(id)a0 unblacklisting:(BOOL)a1 unblacklistingReason:(unsigned long long)a2;
- (BOOL)updateNetwork:(id)a0;

@end
