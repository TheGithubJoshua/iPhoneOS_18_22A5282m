@interface CoreIDV.DigitalPresentmentRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptor;
    void /* unknown type, empty encoding */ nonce;
    void /* unknown type, empty encoding */ merchantID;
    void /* unknown type, empty encoding */ context;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
