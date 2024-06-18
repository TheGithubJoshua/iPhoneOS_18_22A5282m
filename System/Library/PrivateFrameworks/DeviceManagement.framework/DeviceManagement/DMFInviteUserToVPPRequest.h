@class NSURL, NSString;

@interface DMFInviteUserToVPPRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *originator;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
