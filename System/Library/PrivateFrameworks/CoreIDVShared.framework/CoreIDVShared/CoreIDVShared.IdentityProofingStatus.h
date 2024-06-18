@interface CoreIDVShared.IdentityProofingStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ activeConfigurations;
    void /* unknown type, empty encoding */ availability;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
