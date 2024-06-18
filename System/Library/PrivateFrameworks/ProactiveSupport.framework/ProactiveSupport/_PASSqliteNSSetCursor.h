@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;

- (void)setCollection:(id)a0;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
