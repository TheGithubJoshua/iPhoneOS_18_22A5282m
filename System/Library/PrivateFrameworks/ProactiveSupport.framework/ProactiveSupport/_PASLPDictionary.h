@class _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (id)allKeysForObject:(id)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end