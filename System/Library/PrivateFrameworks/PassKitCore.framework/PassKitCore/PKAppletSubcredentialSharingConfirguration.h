@class NSArray, PKPassShareActivationOptions;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding> {
    NSArray *_entitlements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (nonatomic) BOOL sharingRequiresPassword;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
