@class NSMutableDictionary, ML3DatabaseConnection;

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;

@end
