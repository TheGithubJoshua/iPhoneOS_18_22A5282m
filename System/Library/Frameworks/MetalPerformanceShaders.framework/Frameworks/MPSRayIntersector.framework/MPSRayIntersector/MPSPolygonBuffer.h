@protocol MTLBuffer;

@interface MPSPolygonBuffer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long polygonCount;

+ (id)polygonBuffer;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)validateWithVerticesPerPolygon:(unsigned long long)a0 vertexStride:(unsigned long long)a1 indexStride:(unsigned long long)a2;

@end
