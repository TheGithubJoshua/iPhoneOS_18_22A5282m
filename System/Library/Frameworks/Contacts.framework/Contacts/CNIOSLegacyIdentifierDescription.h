@class NSString;

@interface CNIOSLegacyIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (BOOL)setABValue:(void *)a0 onABPerson:(void *)a1 error:(struct __CFError **)a2;
- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)a0 other:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void *)ABValueForABPerson:(void *)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)nilValue;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)resetGuardianManagedValueOnContact:(id)a0;
- (id)valueWithResetIdentifiers:(id)a0;

@end
