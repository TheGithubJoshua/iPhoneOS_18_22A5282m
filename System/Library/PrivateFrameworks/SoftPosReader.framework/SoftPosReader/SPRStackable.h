@interface SPRStackable : SPRObject

- (BOOL)isEmpty;
- (BOOL)clear:(id *)a0;
- (long long)searchWithValue:(id)a0;
- (long long)count;
- (id)peek:(id *)a0;
- (id)peekAll:(id *)a0;
- (id)pop:(id *)a0;
- (BOOL)pushWithValue:(id)a0 error:(id *)a1;

@end
