@class NSString, NSNumber;

@interface MTRAccountLoginClusterLoginParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tempAccountIdentifier;
@property (copy, nonatomic) NSString *setupPIN;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
