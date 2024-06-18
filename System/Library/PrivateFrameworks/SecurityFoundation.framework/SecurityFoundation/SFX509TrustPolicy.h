@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _x509TrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
