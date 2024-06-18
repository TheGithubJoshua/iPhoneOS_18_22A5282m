@interface CKVSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

- (struct sqlite3_stmt { } *)stmt;
- (id)init;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;
- (void)dealloc;

@end
