@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) BOOL deleteFeedback;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;
@property (nonatomic) BOOL managedAppsOnly;
@property (nonatomic) BOOL advanceTransientStates;
@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
