@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long styleOverride;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStyleOverride:(unsigned long long)a0;

@end
