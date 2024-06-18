@class AFBBufRef;

@interface AFBArray : NSArray {
    AFBBufRef *_bufRef;
    unsigned long long _count;
    id /* block */ _objectAtIndex;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (id)initWithBufRef:(id)a0 count:(unsigned long long)a1 objectAtIndex:(id /* block */)a2;

@end
