@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)sqlType;
- (id)attribute;
- (id)initWithProperty:(id)a0;
- (void)setExternalType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)externalType;

@end
