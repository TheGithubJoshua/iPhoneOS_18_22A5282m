@class NSString;

@interface PKPassOwnershipToken : NSObject {
    NSString *_ownershipToken;
}

@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *ownershipToken;

+ (void)deleteAllLocalKeychainOwnershipTokens;
+ (void)queryKeychainForOwnershipTokens:(id /* block */)a0;

- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (void)_readFromKeychain;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (void)_writeToKeychain;
- (void)deleteTokenFromKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)initWithOwnershipToken:(id)a0 identifier:(id)a1;

@end