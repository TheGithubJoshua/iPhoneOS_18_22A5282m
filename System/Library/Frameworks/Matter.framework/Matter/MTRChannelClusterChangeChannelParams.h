@class NSString, NSNumber;

@interface MTRChannelClusterChangeChannelParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *match;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
