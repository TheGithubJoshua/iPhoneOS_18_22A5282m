@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL forceDeletion;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
