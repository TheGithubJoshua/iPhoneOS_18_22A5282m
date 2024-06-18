@interface SCNGeometryDeformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)supportsDeformingNormals;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)instanciateForNode:(id)a0 withContext:(id)a1 computeVertexCount:(unsigned long long)a2;

@end
