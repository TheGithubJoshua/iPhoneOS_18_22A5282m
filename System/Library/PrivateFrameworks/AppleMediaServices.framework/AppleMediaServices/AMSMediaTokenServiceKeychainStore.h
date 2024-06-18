@class NSString;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

- (id)retrieveToken;
- (BOOL)deleteToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (void).cxx_destruct;
- (BOOL)_removeTokenFromKeychain;
- (BOOL)storeToken:(id)a0;
- (struct __CFDictionary { } *)_copyKeychainQuery;

@end
