@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SecItemRateLimit : NSObject {
    BOOL _forceEnabled;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

@property (readonly, nonatomic) int roCapacity;
@property (readonly, nonatomic) double roRate;
@property (readonly, nonatomic) int rwCapacity;
@property (readonly, nonatomic) double rwRate;
@property (readonly, nonatomic) double limitMultiplier;
@property (readonly, nonatomic) NSDate *roBucket;
@property (readonly, nonatomic) NSDate *rwBucket;

+ (id)instance;
+ (void)resetStaticRateLimit;
+ (id)getStaticRateLimit;

- (id)init;
- (BOOL)isEnabled;
- (BOOL)consumeTokenFromBucket:(BOOL)a0;
- (void).cxx_destruct;
- (void)forceEnabled:(BOOL)a0;
- (BOOL)shouldCountAPICalls;
- (BOOL)isReadOnlyAPICallWithinLimits;
- (BOOL)isModifyingAPICallWithinLimits;

@end
