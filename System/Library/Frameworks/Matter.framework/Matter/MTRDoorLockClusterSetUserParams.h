@class NSNumber, NSString;

@interface MTRDoorLockClusterSetUserParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *userUniqueId;
@property (copy, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSNumber *userUniqueID;
@property (copy, nonatomic) NSNumber *userStatus;
@property (copy, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSNumber *credentialRule;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
