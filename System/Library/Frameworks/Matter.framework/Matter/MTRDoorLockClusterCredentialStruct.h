@class NSNumber;

@interface MTRDoorLockClusterCredentialStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *credentialType;
@property (copy, nonatomic) NSNumber *credentialIndex;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
