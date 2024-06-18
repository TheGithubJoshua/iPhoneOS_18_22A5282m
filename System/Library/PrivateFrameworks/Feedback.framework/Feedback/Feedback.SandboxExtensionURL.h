@interface Feedback.SandboxExtensionURL : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ sandboxToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
