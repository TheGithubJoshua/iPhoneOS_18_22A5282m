@class NSArray, NSMutableDictionary, NSDictionary;

@interface HFComparisonResult : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *mutableDifferences;
@property (readonly, nonatomic) NSArray *realDifferences;
@property (weak, nonatomic) id objectA;
@property (weak, nonatomic) id objectB;
@property (readonly, nonatomic) NSDictionary *differences;

+ (id)resultWithDifference:(id)a0 priority:(unsigned long long)a1;

- (id)descriptionBuilder;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)add:(id)a0;
- (BOOL)hasNoDifferencesHigherThanPriority:(unsigned long long)a0;
- (void)addAll:(id)a0;
- (BOOL)containsCriticalDifference;
- (id)filteredIgnoringKeys:(id)a0;
- (id)highestPriorityDifference;
- (id)initWithObjectA:(id)a0 objectB:(id)a1;
- (id)newDifferenceWithKey:(id)a0 priority:(unsigned long long)a1 block:(id /* block */)a2;

@end
