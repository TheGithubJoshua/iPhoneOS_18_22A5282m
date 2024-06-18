@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {
    NSSet *_activityStatisticsQuantityInfoClasses;
}

- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;
- (id)orderedProperties;
- (void).cxx_destruct;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;

@end
