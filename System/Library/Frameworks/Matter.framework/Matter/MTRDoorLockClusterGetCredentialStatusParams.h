@class MTRDoorLockClusterCredentialStruct, NSNumber;

@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
