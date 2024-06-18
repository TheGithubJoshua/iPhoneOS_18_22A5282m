@class NSNumber, NSArray;

@interface MTRGroupsClusterGetGroupMembershipResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *capacity;
@property (copy, nonatomic) NSArray *groupList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
