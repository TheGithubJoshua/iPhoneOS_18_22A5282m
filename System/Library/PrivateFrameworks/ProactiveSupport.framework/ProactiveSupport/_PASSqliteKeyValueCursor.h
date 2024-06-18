@interface _PASSqliteKeyValueCursor : _PASSqliteCollectionsCursor

+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasKey;

- (id)currentIndexedKey;
- (BOOL)currentIndexEof;
- (id)outputKey;

@end
