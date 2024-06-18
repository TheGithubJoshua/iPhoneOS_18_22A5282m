@class NSString, NSArray;

@interface NNMKAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSString *typeIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *defaultEmailAddress;
@property (retain, nonatomic) NSString *pccEmailAddress;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (nonatomic) unsigned long long standaloneState;
@property (retain, nonatomic) NSArray *mailboxes;

+ (BOOL)isiCloudEmailAddress:(id)a0;
+ (id)generateAccountIdForAccount:(id)a0;
+ (id)inboxesFromAccounts:(id)a0;
+ (id)generateIdentifierFromEmailsAddresses:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)directPushNotificationsSupported;
- (BOOL)supportsCloudNotifications;
- (BOOL)_isHotmail;
- (BOOL)_isGmail;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)_isiCloud;
- (BOOL)maySupportStandaloneMode;
- (BOOL)areStandaloneNotificationsEnabledWithCloudNotificationsEnabled:(BOOL)a0;

@end
