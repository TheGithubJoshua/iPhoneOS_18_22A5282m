@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (oneway void)release;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (unsigned long long)count;

@end
