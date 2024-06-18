@class NSNumber;

@interface MTRDoorLockClusterSetCredentialResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *nextCredentialIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
