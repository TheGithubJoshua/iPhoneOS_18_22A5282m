@class NSSet, PKAccountUser, NSDictionary;

@interface PKAccountUserCollection : NSObject <NSSecureCoding> {
    NSDictionary *_accountUsersByAltDSID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *accountUsers;
@property (readonly, nonatomic) PKAccountUser *currentAccountUser;
@property (readonly, nonatomic) PKAccountUser *coOwnerAccountUser;
@property (readonly, nonatomic, getter=isCoOwner) BOOL coOwner;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)_isEqualToAccountUserCollection:(id)a0;
- (void)_updateWithAccountUsers:(id)a0;
- (id)accountUserForTransaction:(id)a0;
- (id)accountUserWithAltDSID:(id)a0;
- (id)accountUsersExcludingCurrentAccountUser;
- (id)activeAccountUsers;
- (id)activeAccountUsersExcludingCurrentAccountUser;
- (id)initWithAccountUsers:(id)a0;
- (id)transactionSourceIdentifiers;

@end
