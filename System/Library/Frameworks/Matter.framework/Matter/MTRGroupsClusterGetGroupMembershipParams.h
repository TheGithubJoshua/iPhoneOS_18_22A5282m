@class NSArray, NSNumber;

@interface MTRGroupsClusterGetGroupMembershipParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *groupList;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end