@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {
    struct __ACMHandle { } *_acmContext;
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSerializedCredentialSet:(id)a0;
- (id)serializedCredentialSet;

@end
