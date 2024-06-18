@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    BOOL _legacy;
    NEKeychainItem *_oldItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long domain;
@property (copy) NSString *identifier;
@property (copy) NSString *password;
@property (copy) NSData *persistentReference;
@property (copy) NSString *accessGroup;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)remove;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)a0;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPassword:(id)a0 domain:(long long)a1;
- (id)initWithPassword:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (void)migrateFromPreferences:(struct __SCPreferences { } *)a0;
- (void)syncUsingConfiguration:(id)a0 accountName:(id)a1 passwordType:(long long)a2 identifierSuffix:(id)a3;

@end
