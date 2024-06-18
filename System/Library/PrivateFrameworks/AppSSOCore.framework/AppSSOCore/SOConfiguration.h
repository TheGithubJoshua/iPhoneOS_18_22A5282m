@class NSArray;

@interface SOConfiguration : NSObject <NSSecureCoding> {
    NSArray *_profiles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *profiles;
@property (readonly, nonatomic) BOOL empty;

+ (id)stringWithHandleResult:(long long)a0;

- (id)initWithCoder:(id)a0;
- (id)_profileForURLWithStandardScheme:(id)a0 isCredential:(BOOL)a1;
- (id)realms;
- (BOOL)_matchHost:(id)a0 inCredentialProfile:(id)a1;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2 profile:(id *)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (id)initWithProfiles:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (id)_profileForURLWithSSOIDScheme:(id)a0;
- (id)_profileForURLWithRealmScheme:(id)a0;
- (id)_profileForURLWithHostScheme:(id)a0;

@end
