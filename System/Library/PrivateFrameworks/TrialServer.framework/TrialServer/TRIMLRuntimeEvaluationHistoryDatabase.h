@class TRIDatabase;

@interface TRIMLRuntimeEvaluationHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (BOOL)enumerateRecordsNewerThanDate:(id)a0 block:(id /* block */)a1;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (id)init;
- (id)initWithDatabase:(id)a0;
- (BOOL)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (BOOL)addRecord:(id)a0 usingTransaction:(id)a1;

@end
