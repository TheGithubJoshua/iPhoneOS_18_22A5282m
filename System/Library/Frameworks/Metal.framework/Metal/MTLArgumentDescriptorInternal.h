@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (void)setDataType:(unsigned long long)a0;
- (id)init;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)dataType;
- (unsigned long long)access;
- (void)setAccess:(unsigned long long)a0;
- (void)setTextureType:(unsigned long long)a0;
- (unsigned long long)index;
- (unsigned long long)hash;
- (unsigned long long)textureType;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)arrayLength;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setArrayLength:(unsigned long long)a0;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
