@class NSNumber;

@interface MTRLevelControlClusterMoveToLevelWithOnOffParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *level;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
