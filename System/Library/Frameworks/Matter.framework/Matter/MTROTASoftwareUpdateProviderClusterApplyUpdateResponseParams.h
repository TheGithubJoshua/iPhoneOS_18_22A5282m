@class NSNumber;

@interface MTROTASoftwareUpdateProviderClusterApplyUpdateResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSNumber *delayedActionTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
