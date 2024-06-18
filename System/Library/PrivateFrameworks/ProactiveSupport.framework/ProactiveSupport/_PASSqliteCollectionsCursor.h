@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (BOOL)hasKey;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (double)baseEstimatedCost;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (void)applyKeySort:(BOOL)a0;
- (id)init;
- (void)stepIndexedRow;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyRowIdSort:(BOOL)a0;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (id)outputKey;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)outputRowId;
- (void)applyValueSort:(BOOL)a0;

@end
