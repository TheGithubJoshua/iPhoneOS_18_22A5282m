@class NSString;

@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)abPropertyID:(int *)a0;
- (id)init;
- (BOOL)isNonnull;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (id)standardLabels;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)a0;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)a0;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)a0 length:(unsigned long long)a1;
- (id)equivalentLabelSets;
- (id /* block */)fromPlistTransform;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;
- (id)stringForIndexingForContact:(id)a0;

@end
