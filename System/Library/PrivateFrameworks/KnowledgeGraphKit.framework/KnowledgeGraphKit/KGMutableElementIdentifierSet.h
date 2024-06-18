@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;
- (void)unionWithIdentifierSet:(id)a0;
- (id)copy;
- (void)subtractIdentifierSet:(id)a0;
- (void)removeIdentifier:(unsigned long long)a0;
- (void)addIdentifier:(unsigned long long)a0;
- (void)removeAllIdentifiers;
- (void *)mutableBitmap;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)intersectWithIdentifierSet:(id)a0;

@end
