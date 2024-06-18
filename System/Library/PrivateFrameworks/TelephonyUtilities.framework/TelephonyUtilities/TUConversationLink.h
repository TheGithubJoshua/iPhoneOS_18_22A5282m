@class NSUUID, NSString, TUUserConfiguration, NSDate, NSData, NSSet, NSURL, TUHandle;

@interface TUConversationLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *deletionDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (retain, nonatomic) TUHandle *originatorHandle;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) long long linkLifetimeScope;
@property (retain, nonatomic) NSString *URLFragment;
@property (copy, nonatomic) NSString *linkName;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSSet *invitedMemberHandles;
@property (readonly, nonatomic) NSURL *URL;

+ (BOOL)checkMatchingConversationLinkCriteriaForURL:(id)a0;
+ (id)preferredBaseURL;
+ (id)preferredBaseURLString;
+ (id)conversationLinkComponentsFromURL:(id)a0;
+ (id)conversationLinkForURL:(id)a0;
+ (id)baseURLs;
+ (id)publicKeyForBase64EncodedString:(id)a0;
+ (id)prefixedPseudonymFor:(id)a0;
+ (id)baseURLStrings;
+ (id)baseURLComponentsForURL:(id)a0;
+ (unsigned long long)conversationLinkVersion;

- (id)initWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)valueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalentToConversationLink:(id)a0;
- (id)base64PublicKey;
- (BOOL)canCreateConversations;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3 creationDate:(id)a4 deletionDate:(id)a5 expirationDate:(id)a6 invitedMemberHandles:(id)a7 locallyCreated:(BOOL)a8 linkName:(id)a9 linkLifetimeScope:(long long)a10;
- (BOOL)isEqualToConversationLink:(id)a0;
- (BOOL)isEquivalentToPseudonym:(id)a0 andPublicKey:(id)a1;
- (id)unprefixedPseudonym;

@end
