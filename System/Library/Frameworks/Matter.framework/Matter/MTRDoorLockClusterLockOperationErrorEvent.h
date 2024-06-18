@class NSNumber, NSArray;

@interface MTRDoorLockClusterLockOperationErrorEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *lockOperationType;
@property (copy, nonatomic) NSNumber *operationSource;
@property (copy, nonatomic) NSNumber *operationError;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *sourceNode;
@property (copy, nonatomic) NSArray *credentials;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end