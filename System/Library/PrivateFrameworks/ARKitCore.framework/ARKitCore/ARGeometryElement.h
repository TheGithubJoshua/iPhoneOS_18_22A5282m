@protocol MTLBuffer;

@interface ARGeometryElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) long long count;
@property (nonatomic) long long bytesPerIndex;
@property (nonatomic) long long primitiveType;
@property (readonly, nonatomic) long long indexCountPerPrimitive;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBuffer:(id)a0 count:(long long)a1 bytesPerIndex:(long long)a2 primitiveType:(long long)a3;

@end
