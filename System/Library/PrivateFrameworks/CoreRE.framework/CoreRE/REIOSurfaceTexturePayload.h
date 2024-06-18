@class IOSurface;

@interface REIOSurfaceTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) IOSurface *ioSurface;
@property (readonly, nonatomic) unsigned long long planeIndex;
@property (readonly, nonatomic) unsigned long long pixelFormat;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasSameUnderlyingIOSurface:(id)a0;
- (id)initWithIOSurface:(id)a0 plane:(unsigned long long)a1 pixelFormat:(unsigned long long)a2;

@end
