@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *managingProfileIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
