@class NSArray;

@interface CKVDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}

- (id)init;
- (id)initWithDatabaseValueArray:(id)a0;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;
- (unsigned long long)count;

@end
