@class NSString;

@interface CNCropRectDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (BOOL)abPropertyID:(int *)a0;
- (BOOL)setABValue:(void *)a0 onABPerson:(void *)a1 error:(struct __CFError **)a2;
- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void *)ABValueForABPerson:(void *)a0;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)nilValue;
- (BOOL)setCNValue:(id)a0 onABPerson:(void *)a1 withDependentPropertiesContext:(id)a2 error:(id *)a3;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)CNValueForContact:(id)a0;

@end
