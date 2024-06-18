@interface _NSPlaceholderData : NSData

- (id)init;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)initWithData:(id)a0;
- (id)retain;

@end
