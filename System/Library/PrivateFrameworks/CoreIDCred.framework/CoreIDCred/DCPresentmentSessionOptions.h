@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long sessionEncryptionMode;
@property unsigned long long responseEncryptionMode;
@property unsigned long long readerAuthenticationPolicy;
@property unsigned long long elementFallbackModes;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0 readerAuthenticationPolicy:(unsigned long long)a1;

@end
