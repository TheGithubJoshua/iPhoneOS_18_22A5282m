@class NSArray, NSString, NSData, NEKeychainItem;

@interface NEVPNProtocolIPSec : NEVPNProtocol

@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSArray *legacyProposals;
@property (copy) NSArray *legacyExchangeMode;
@property BOOL extendedAuthPasswordPrompt;
@property long long authenticationMethod;
@property BOOL useExtendedAuthentication;
@property (copy) NSData *sharedSecretReference;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)init;
- (id)initWithType:(long long)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;

@end
