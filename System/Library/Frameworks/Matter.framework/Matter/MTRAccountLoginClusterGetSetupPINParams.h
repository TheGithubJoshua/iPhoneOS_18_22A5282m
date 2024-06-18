@class NSString, NSNumber;

@interface MTRAccountLoginClusterGetSetupPINParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tempAccountIdentifier;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
