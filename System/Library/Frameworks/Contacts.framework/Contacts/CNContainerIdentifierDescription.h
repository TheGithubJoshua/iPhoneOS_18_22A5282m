@interface CNContainerIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (void *)ABValueFromCNValue:(id)a0;
- (BOOL)isNonnull;
- (id)key;
- (id)CNValueFromABValue:(void *)a0;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
