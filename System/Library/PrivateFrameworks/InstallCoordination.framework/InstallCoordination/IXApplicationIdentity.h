@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;
@property (nonatomic) BOOL isPersonalPersonaPlaceholder;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)canonicalSerializationForPlistKey;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initWithPlistKeySerialization:(id)a0;
- (id)possibleSerializationsForPlistKey;

@end
