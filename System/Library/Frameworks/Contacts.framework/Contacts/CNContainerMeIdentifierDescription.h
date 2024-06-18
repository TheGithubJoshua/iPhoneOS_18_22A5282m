@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription

- (Class)valueClass;
- (void *)ABValueFromCNValue:(id)a0;
- (id)key;
- (id)CNValueFromABValue:(void *)a0;
- (BOOL)isWritable;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end
