@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) BOOL includeTemporary;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
