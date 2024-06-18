@class NSString, NSMutableDictionary;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *identifierTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)log;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allIdentifiers;
- (void)reset;
- (id)identifierForExtensionIdentifier:(id)a0;
- (id)initWithExtensionIdentifiers:(id)a0;
- (BOOL)isKnownIdentifier:(id)a0;
- (id)knownIdentifiersForExtensionIdentifier:(id)a0;
- (void)revokeIdentifier:(id)a0;

@end
