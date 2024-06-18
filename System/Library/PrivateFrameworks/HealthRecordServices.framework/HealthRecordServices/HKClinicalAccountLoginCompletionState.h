@class NSNumber, HKClinicalAccount;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKClinicalAccount *account;
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID;
@property (readonly, nonatomic) BOOL wasRelogin;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:(id)a0 wasRelogin:(BOOL)a1;

@end
