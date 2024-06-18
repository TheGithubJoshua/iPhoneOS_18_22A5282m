@class NSString;

@interface DMFDeactivateConfigurationOrganizationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
