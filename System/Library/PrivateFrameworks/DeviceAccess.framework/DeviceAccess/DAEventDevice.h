@class DADevice;

@interface DAEventDevice : DAEvent

@property (readonly, nonatomic) DADevice *device;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 device:(id)a1;

@end
