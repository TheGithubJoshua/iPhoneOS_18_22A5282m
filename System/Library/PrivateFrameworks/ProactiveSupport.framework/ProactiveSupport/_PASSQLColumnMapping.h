@interface _PASSQLColumnMapping : NSObject {
    struct sqlite3_stmt { } *_stmt;
    int _stmtReprepareCounter;
    const struct _PASCompactStringArray { } *_tableColumnNamesFromSchema;
    const struct _PASCompactStringArray { } *_columnAliases;
    const char *_uniqueTableName;
}

- (void)invalidateIfNeeded;
- (id)initWithStatementPtr:(struct sqlite3_stmt { } *)a0;
- (void)_ensureColumnMappingExists;
- (void)invalidate;
- (int)indexForColumnAlias:(const char *)a0;
- (int)indexForColumnName:(const char *)a0 table:(const char *)a1;
- (void)dealloc;
- (void)_deallocState;
- (void)resetSearchHint;

@end
