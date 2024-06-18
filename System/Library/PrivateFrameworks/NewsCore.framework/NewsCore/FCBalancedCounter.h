@class NSObject;
@protocol OS_dispatch_group;

@interface FCBalancedCounter : NSObject

@property (nonatomic) long long count;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)decrement;
- (id)init;
- (void)increment;
- (void).cxx_destruct;
- (void)notifyWhenCountReachesZeroOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)_bumpCounterPositively:(BOOL)a0;

@end
