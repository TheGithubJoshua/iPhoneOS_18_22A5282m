@interface SiriCoreSQLiteStatement : NSObject {
    struct sqlite3_stmt { } *_impl;
    BOOL _finalizeWhenDone;
}

- (struct sqlite3_stmt { } *)impl;
- (id)initWithImpl:(struct sqlite3_stmt { } *)a0 finalizeWhenDone:(BOOL)a1;
- (void)clearBindings;
- (void)dealloc;
- (void)reset;

@end
