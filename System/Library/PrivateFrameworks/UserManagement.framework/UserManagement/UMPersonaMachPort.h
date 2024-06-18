@interface UMPersonaMachPort : NSMachPort <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
