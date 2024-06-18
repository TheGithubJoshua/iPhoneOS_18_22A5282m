@interface AppStoreKitInternal.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void)invalidateMediaToken;
- (id)fetchMediaToken;
- (void)accountsDidChange;
- (void).cxx_destruct;

@end
