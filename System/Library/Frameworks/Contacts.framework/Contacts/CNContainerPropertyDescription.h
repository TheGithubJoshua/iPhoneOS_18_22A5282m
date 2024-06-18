@class NSString;

@interface CNContainerPropertyDescription : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) Class valueClass;

- (void *)ABValueFromCNValue:(id)a0;
- (id)CNValueFromABValue:(void *)a0;
- (id)nilValue;
- (void *)ABValueForABSource:(void *)a0;
- (id)CNValueForContainer:(id)a0;
- (int)abPropertyID;
- (BOOL)isConvertibleABValue:(void *)a0;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (BOOL)isValue:(id)a0 equalToEmptyEquivalentOrValue:(id)a1;
- (BOOL)setABValue:(void *)a0 onABSource:(void *)a1 error:(struct __CFError **)a2;
- (void)setCNValue:(id)a0 onContainer:(id)a1;

@end