@class NSArray, NSString, NSDictionary;

@interface REMeshPartDescriptor : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *coreAttributeNames;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int indexPayloadOffset;
@property (readonly, nonatomic) unsigned int indexCount;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) unsigned long long indexType;
@property (readonly, nonatomic) unsigned long long indexBufferSize;
@property (readonly, nonatomic) unsigned int vertexCount;
@property (readonly, nonatomic) NSDictionary *coreAttributes;
@property (readonly, nonatomic) NSDictionary *customAttributes;
@property (readonly, nonatomic) unsigned int instanceCount;
@property (readonly, nonatomic) unsigned int materialIndex;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMin;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ boundingBoxMax;
@property (readonly, nonatomic) unsigned char doubleSidedFlag;
@property (readonly, nonatomic) unsigned char windingOrderIsCCW;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMeshAssetPart:(const void *)a0 partTransform:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a1 payloadBuilder:(void *)a2;
- (id)initWithName:(id)a0 vertexCount:(SEL)a1 indexCount:(id)a2 instanceCount:(unsigned int)a3 attributes:(unsigned int)a4 materialIndex:(unsigned int)a5 boundingBoxMin:(id)a6 boundingBoxMax:(unsigned int)a7 doubleSidedFlag:(unsigned char)a8 windingOrderIsCCW:(unsigned char)a9 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a10;
- (id)initWithResourceDefinition:(const void *)a0 meshPart:(const void *)a1 payloadBuilder:(void *)a2;
- (struct MeshPart { struct AttributeTable { unsigned long long x0; struct FixedArray<re::BufferSlice> { struct Allocator *x0; unsigned long long x1; struct BufferSlice *x2; } x1; struct FixedArray<re::VertexBufferFormat> { struct Allocator *x0; unsigned long long x1; struct VertexBufferFormat *x2; } x2; struct HashBrown<re::WeakStringID, unsigned char, re::Hash<re::WeakStringID>, re::EqualTo<re::WeakStringID>, re::Hash<uint8_t>, false> { void *x0; void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct Allocator *x7; } x3; } x0; struct FixedArray<re::StringID> { struct Allocator *x0; unsigned long long x1; struct StringID *x2; } x1; struct Matrix4x4<float> { union { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; struct float4x4 { void /* unknown type, empty encoding */ x0[4]; } x1; struct { struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x0; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x2; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x3; } x2; struct Vector4<float> { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x3[4]; float x4[4][4]; float x5[16]; } x0; } x2; struct AABB { struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x0; struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x1; } x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned short x7; struct FixedInlineArray<unsigned char, 24UL> { unsigned char x0[24]; } x8; struct StringID { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; char *x1; } x9; unsigned int x10; unsigned int x11; unsigned char x12; int x13; struct RenderFlags { unsigned short x0; } x14; })meshPartWithPayloadBuffer:(const struct Buffer { id x0; } *)a0;
- (BOOL)validateAttribute:(id)a0 payloadSize:(unsigned long long)a1 required:(BOOL)a2 error:(id *)a3;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 error:(id *)a1;

@end
