@class NSNumber, NSData;

@interface MTRDoorLockClusterUnlockWithTimeoutParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSData *pinCode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
