@class NSString, NSArray, NSDictionary, NSNumber;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serverId;
@property (copy, nonatomic) NSNumber *dsid;
@property (nonatomic) BOOL isFamilyMember;
@property (copy, nonatomic) NSArray *aliasServerIds;
@property (copy, nonatomic) NSArray *invitationSentToIds;
@property (copy, nonatomic) NSDictionary *expiresByGroupId;
@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic, getter=isPending) BOOL pending;
@property (copy, nonatomic) NSNumber *trackingTimestamp;
@property (copy, nonatomic) NSNumber *favoriteOrder;
@property (copy, nonatomic) NSString *_prettyNameInternal;
@property (nonatomic) long long idsStatus;
@property (nonatomic) BOOL reachable;
@property (copy, nonatomic) NSString *qualifiedIdentifier;
@property (copy, nonatomic) NSString *_idsCorrelationIdentifierInternal;

+ (id)handleWithId:(id)a0;
+ (id)familyHandleWithId:(id)a0 dsid:(id)a1;
+ (id)handleWithId:(id)a0 serverId:(id)a1;

- (void)abPreferencesDidChange;
- (id)initWithCoder:(id)a0;
- (BOOL)isPhoneNumber;
- (id)recordId;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizePhoneNumber:(id)a0;
- (id)prettyName;
- (id)IDSRecipientFromHandle:(id)a0;
- (void)addressBookDidChange;
- (id)cachedPrettyName;
- (void)clearFavoriteOrder;
- (id)comparisonIdentifier;
- (void)correlationIdentifierForHandle:(id)a0 withCompletion:(id /* block */)a1;
- (void)idsCorrelationIdentifierWithCompletion:(id /* block */)a0;
- (BOOL)isSharingThroughGroupId:(id)a0;
- (long long)prettyNameCompare:(id)a0;
- (void)prettyNameWithCompletion:(id /* block */)a0;
- (void)setICloudId:(id)a0;

@end
