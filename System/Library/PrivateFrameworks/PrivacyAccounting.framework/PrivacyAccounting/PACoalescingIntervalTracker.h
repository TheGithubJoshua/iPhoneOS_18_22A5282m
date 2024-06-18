@class PAAccessLogger, NSMutableDictionary;

@interface PACoalescingIntervalTracker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_coalescingIntervals;
    unsigned long long _injectedIdentifier;
}

@property (readonly, weak, nonatomic) PAAccessLogger *logger;
@property (nonatomic) double intervalEndTime;
@property (nonatomic) BOOL collectAssetIdentifiers;

- (id)initWithLogger:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)coalesce:(id)a0;
- (void)dealloc;
- (void)expireIntervalWithMatcher:(id)a0 state:(id)a1;

@end
