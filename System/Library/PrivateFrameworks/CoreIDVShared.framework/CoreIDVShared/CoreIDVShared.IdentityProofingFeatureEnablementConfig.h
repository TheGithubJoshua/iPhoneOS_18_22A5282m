@interface CoreIDVShared.IdentityProofingFeatureEnablementConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isFedStatsOptinEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;

@end
