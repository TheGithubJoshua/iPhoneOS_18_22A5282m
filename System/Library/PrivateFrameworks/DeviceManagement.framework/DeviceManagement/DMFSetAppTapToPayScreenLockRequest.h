@class NSNumber;

@interface DMFSetAppTapToPayScreenLockRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *tapToPayScreenLock;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
