@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {
    unsigned int _value;
}

@property (readonly) unsigned int value;

- (id)initWithValue:(unsigned int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
