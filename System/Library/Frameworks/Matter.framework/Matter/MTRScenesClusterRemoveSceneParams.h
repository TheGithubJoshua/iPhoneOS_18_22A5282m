@class NSNumber;

@interface MTRScenesClusterRemoveSceneParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *sceneID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
