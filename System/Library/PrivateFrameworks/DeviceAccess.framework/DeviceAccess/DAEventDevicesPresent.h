@interface DAEventDevicesPresent : DAEvent

@property (readonly, nonatomic) BOOL devicesPresent;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithPresent:(BOOL)a0;

@end
