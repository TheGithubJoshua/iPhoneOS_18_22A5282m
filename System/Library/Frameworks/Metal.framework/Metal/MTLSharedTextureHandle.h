@class NSString;
@protocol MTLDevice;

@interface MTLSharedTextureHandle : NSObject <NSSecureCoding> {
    struct MTLSharedTextureHandlePrivate { struct __IOSurface *x0; id x1; id x2; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;

- (id)initWithCoder:(id)a0;
- (struct __IOSurface { } *)ioSurface;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithMachPort:(unsigned int)a0;
- (unsigned int)createMachPort;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 label:(id)a1;

@end
