@class NSNumber;

@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
