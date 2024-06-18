@class NSString, NSArray, NSMutableDictionary, TSDGLShader, NSMutableArray;
@protocol MTLBuffer, MTLDevice;

@interface TSDGPUDataBuffer : NSObject <TSDGLDataBuffer, TSDMTLDataBuffer> {
    unsigned long long _currentBufferIndex;
    NSMutableArray *_arrayBuffers;
    NSMutableDictionary *_attributeToArrayBuffersDictionary;
    unsigned long long _elementArrayCount;
    unsigned short *_gLElementData;
    BOOL _gLElementDataBufferWasSetup;
    unsigned int _gLElementDataBuffer;
    id<MTLBuffer> _metalElementData;
    struct CGSize { double width; double height; } _gLElementMeshSize;
    unsigned long long _gLElementQuadParticleCount;
    BOOL _conformsToMetalProtocol;
    id<MTLDevice> _device;
    unsigned int _gLVertexArrayObjects[2];
    BOOL _isUpdatingRawDataBuffer;
    BOOL _didTeardown;
    BOOL _isEnabled;
    TSDGLShader *_enabledShader;
}

@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) unsigned long long texCoordAttributeIndex;
@property (readonly) unsigned long long centerAttributeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long vertexCount;
@property (readonly) NSArray *vertexAttributes;
@property (nonatomic) unsigned int drawMode;
@property (readonly) BOOL isDynamicallyBuffered;

+ (id)newDataBufferWithVertexAttributes:(id)a0 meshSize:(struct CGSize { double x0; double x1; })a1;
+ (id)newDataBufferWithVertexAttributes:(id)a0 meshSize:(struct CGSize { double x0; double x1; })a1 device:(id)a2;
+ (id)newDataBufferWithVertexAttributes:(id)a0 quadParticleCount:(unsigned long long)a1;
+ (id)newDataBufferWithVertexAttributes:(id)a0 quadParticleCount:(unsigned long long)a1 device:(id)a2;
+ (id)newDataBufferWithVertexAttributes:(id)a0 vertexCount:(unsigned long long)a1 indexElementCount:(unsigned long long)a2;
+ (id)newDataBufferWithVertexAttributes:(id)a0 vertexCount:(unsigned long long)a1 indexElementCount:(unsigned long long)a2 device:(id)a3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 device:(id)a2;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 device:(id)a3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 device:(id)a4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 includeCenterAttribute:(BOOL)a4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 includeCenterAttribute:(BOOL)a4 addTransparentBorder:(BOOL)a5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 includeCenterAttribute:(BOOL)a4 addTransparentBorder:(BOOL)a5 device:(id)a6;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 includeCenterAttribute:(BOOL)a4 device:(id)a5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textureFlipped:(BOOL)a2;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textureFlipped:(BOOL)a2 device:(id)a3;
+ (void)p_addTransparentBorderInsetToTextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 vertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

- (void)teardown;
- (void)dealloc;
- (struct { float x0; float x1; float x2; })GLPoint3DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (struct { float x0; float x1; float x2; float x3; })GLPoint4DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)disableWithDevice:(id)a0;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1 advanceDynamicBuffer:(BOOL)a2;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 advanceDynamicBuffer:(BOOL)a3;
- (void)enableDataBuffer;
- (void)encodeWithEncoder:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithVertexAttributes:(id)a0 meshSize:(struct CGSize { double x0; double x1; })a1 bufferCount:(unsigned long long)a2;
- (id)initWithVertexAttributes:(id)a0 vertexCount:(unsigned long long)a1 indexElementCount:(unsigned long long)a2 bufferCount:(unsigned long long)a3;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 meshSize:(struct CGSize { double x0; double x1; })a2 textureFlipped:(BOOL)a3 includeCenterAttribute:(BOOL)a4 addTransparentBorder:(BOOL)a5;
- (BOOL)p_setAttributeUpdateData:(struct { long long x0; unsigned long long x1; BOOL x2; char *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; struct _NSRange { unsigned long long x0; unsigned long long x1; } x8; unsigned long long x9; } *)a0 fromAttribute:(id)a1;
- (void)p_setupElementArrayBufferIfNecessary;
- (void)setCGFloat:(double)a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (void)setDataForAttribute:(id)a0 atIndex:(unsigned long long)a1 fromAttribute:(id)a2 dataBuffer:(id)a3 index:(unsigned long long)a4;
- (void)setGLPoint2D:(struct { float x0; float x1; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (void)setGLPoint3D:(struct { float x0; float x1; float x2; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (void)setGLPoint4D:(struct { float x0; float x1; float x2; float x3; })a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;
- (void)setGLushort:(unsigned short)a0 forIndexElement:(unsigned long long)a1;
- (void)updateDataBufferAttributes:(id)a0 withBlock:(id /* block */)a1;
- (void)updateDataBufferAttributesWithBlock:(id /* block */)a0;
- (void)updateMetalDataBufferAttributes:(id)a0 withBlock:(id /* block */)a1;
- (id)vertexAttributeNamed:(id)a0;
- (struct { float x0; float x1; })GLPoint2DForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned short)GLushortForIndexElement:(unsigned long long)a0;
- (float)GLfloatForAttribute:(id)a0 atIndex:(unsigned long long)a1;
- (void)drawWithShader:(id)a0;
- (void)disableDataBufferWithShader:(id)a0;
- (void)disableGLElementArrayBuffer;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1 advanceDynamicBuffer:(BOOL)a2 instanceCount:(unsigned long long)a3;
- (void)drawWithEncoder:(id)a0 atIndex:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 advanceDynamicBuffer:(BOOL)a3 instanceCount:(unsigned long long)a4;
- (void)drawWithShader:(id)a0 advanceDynamicBuffer:(BOOL)a1;
- (void)drawWithShader:(id)a0 deactivateShaderWhenDone:(BOOL)a1;
- (void)drawWithShader:(id)a0 deactivateShaderWhenDone:(BOOL)a1 advanceDynamicBuffer:(BOOL)a2;
- (void)drawWithShader:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 deactivateShaderWhenDone:(BOOL)a2;
- (void)drawWithShader:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 deactivateShaderWhenDone:(BOOL)a2 advanceDynamicBuffer:(BOOL)a3;
- (void)enableDataBufferWithShader:(id)a0;
- (void)enableGLElementArrayBuffer;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)setGLfloat:(float)a0 forAttribute:(id)a1 atIndex:(unsigned long long)a2;

@end