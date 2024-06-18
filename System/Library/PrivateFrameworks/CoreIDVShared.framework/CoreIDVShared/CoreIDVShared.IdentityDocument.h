@interface CoreIDVShared.IdentityDocument : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ pdf417Data;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
