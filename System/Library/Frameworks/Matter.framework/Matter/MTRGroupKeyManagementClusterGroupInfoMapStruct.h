@class NSNumber, NSArray, NSString;

@interface MTRGroupKeyManagementClusterGroupInfoMapStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSArray *endpoints;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
