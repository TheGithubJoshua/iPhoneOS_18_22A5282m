@class NSNumber, NSString;

@interface MTRGroupsClusterViewGroupResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
