@class INImage;

@interface LNImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INImage *inImage;
@property (readonly, nonatomic) LNImage *proxiedImageCopy;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemImageNamed:(id)a0;
- (id)initWithData:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithINImage:(id)a0;
- (id)initWithImageNamed:(id)a0;
- (id)initWithImageNamed:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 renderingMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 width:(double)a1 height:(double)a2 renderingMode:(unsigned long long)a3;

@end
