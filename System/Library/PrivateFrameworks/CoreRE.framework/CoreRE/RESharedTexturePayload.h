@class MTLSharedTextureHandle;

@interface RESharedTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) MTLSharedTextureHandle *handle;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTexture:(id)a0;
- (BOOL)hasSameUnderlyingIOSurface:(id)a0;

@end
