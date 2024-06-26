@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource> {
    NSArray *_credentials;
}

@property (readonly, nonatomic) NSArray *credentials;

- (void).cxx_destruct;
- (id)savedAccountsForPersistentIdentifiers:(id)a0;
- (id)initWithPasswords:(id)a0;

@end
