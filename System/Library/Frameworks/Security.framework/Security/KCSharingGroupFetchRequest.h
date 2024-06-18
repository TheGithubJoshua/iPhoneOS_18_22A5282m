@class NSPredicate;

@interface KCSharingGroupFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)all;
+ (id)pending;
+ (id)groupName:(id)a0;
+ (id)predicateMatchingAllGroups;
+ (id)predicateMatchingGroupsWithInviteStatus:(long long)a0;
+ (id)predicateMatchingGroupsWithName:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
