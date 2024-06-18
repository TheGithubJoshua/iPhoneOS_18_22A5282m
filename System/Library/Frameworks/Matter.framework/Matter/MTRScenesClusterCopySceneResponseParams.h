@class NSNumber;

@interface MTRScenesClusterCopySceneResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupIdFrom;
@property (copy, nonatomic) NSNumber *sceneIdFrom;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *groupIdentifierFrom;
@property (copy, nonatomic) NSNumber *sceneIdentifierFrom;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
