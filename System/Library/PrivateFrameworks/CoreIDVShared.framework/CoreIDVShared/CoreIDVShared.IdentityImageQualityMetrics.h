@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inlineMetrics;
    void /* unknown type, empty encoding */ captureMetrics;
    void /* unknown type, empty encoding */ videoMetrics;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
