@class NSNumber;

@interface MTRColorControlClusterMoveColorParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *rateX;
@property (copy, nonatomic) NSNumber *rateY;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
