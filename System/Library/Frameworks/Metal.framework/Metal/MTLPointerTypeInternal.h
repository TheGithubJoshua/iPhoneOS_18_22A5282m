@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    BOOL _elementIsArgumentBuffer;
    BOOL _isConstantBuffer;
    BOOL _doRetain;
}

- (unsigned long long)alignment;
- (unsigned long long)elementType;
- (unsigned long long)dataType;
- (unsigned long long)access;
- (id)elementArrayType;
- (BOOL)elementIsArgumentBuffer;
- (BOOL)elementIsIndirectArgumentBuffer;
- (id)structType;
- (id)elementStructType;
- (unsigned long long)dataSize;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)isConstantBuffer;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (id)elementTypeDescription;

@end
