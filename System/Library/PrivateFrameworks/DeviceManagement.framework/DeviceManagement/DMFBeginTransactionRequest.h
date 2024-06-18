@class NSString;

@interface DMFBeginTransactionRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
