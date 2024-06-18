@class NSNumber, NSString;

@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *target;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
