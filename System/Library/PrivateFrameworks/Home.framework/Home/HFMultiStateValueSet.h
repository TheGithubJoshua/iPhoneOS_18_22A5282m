@class NSSet, NSMutableDictionary, NSArray, HMCharacteristicMetadata;

@interface HFMultiStateValueSet : NSObject <NSCopying, NSFastEnumeration>

@property (readonly, nonatomic) NSMutableDictionary *displayResultsByValue;
@property (readonly, nonatomic) HMCharacteristicMetadata *characteristicMetadata;
@property (readonly, nonatomic) NSSet *allValues;
@property (readonly, nonatomic) unsigned long long count;
@property (copy, nonatomic) id /* block */ valueComparator;
@property (readonly, nonatomic) NSArray *sortedValues;

+ (id)binaryValueSetWithCharacteristicMetadata:(id)a0 firstValue:(id)a1 firstTitle:(id)a2 secondValue:(id)a3 secondTitle:(id)a4;

- (id)init;
- (void)minusSet:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)removeValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)displayResultsForValue:(id)a0;
- (id)initWithCharacteristicMetadata:(id)a0;
- (BOOL)addValue:(id)a0 displayResults:(id)a1;
- (BOOL)addValue:(id)a0 displayResults:(id)a1 addOnlyIfValid:(BOOL)a2;
- (void)addValuesFromArray:(id)a0 displayResultsGenerator:(id /* block */)a1;
- (void)removeValuesFromArray:(id)a0;
- (void)unionSet:(id)a0 displayResultsGenerator:(id /* block */)a1;

@end
