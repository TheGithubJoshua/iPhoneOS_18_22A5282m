@interface LiveFSMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int machPort;

+ (id)newByCopyingPort:(unsigned int)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithPort:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
