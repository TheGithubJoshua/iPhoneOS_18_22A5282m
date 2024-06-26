@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    BOOL _isDepthTexture;
}

- (unsigned long long)textureDataType;
- (unsigned long long)dataType;
- (unsigned long long)access;
- (BOOL)isDepthTexture;
- (unsigned long long)textureType;
- (id)initWithDataType:(unsigned long long)a0 textureType:(unsigned long long)a1 access:(unsigned long long)a2 isDepthTexture:(BOOL)a3;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;

@end
