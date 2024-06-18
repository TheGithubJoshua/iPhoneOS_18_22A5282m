@class NSMapTable;

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (id)leftValueEnumerableForRightValue:(id)a0;
- (id)leftValues;
- (id)rightValueEnumerable;
- (id)rightValuesForLeftValue:(id)a0;
- (BOOL)hasRightValuesForLeftValue:(id)a0;
- (id)leftValueEnumerable;
- (BOOL)isEmpty;
- (id)rightValues;
- (id)initWithLeftValueOptions:(unsigned long long)a0 rightValueOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)rightValueEnumerableForLeftValue:(id)a0;
- (id)description;
- (void)unregisterAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (BOOL)hasLeftValuesForRightValue:(id)a0;
- (void)registerAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)leftValuesForRightValue:(id)a0;

@end
