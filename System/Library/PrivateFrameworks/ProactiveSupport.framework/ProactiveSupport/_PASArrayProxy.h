@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {
    id /* block */ _objectAtIndexBlock;
    id /* block */ _countBlock;
}

- (id)initWithCoder:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_pas_unproxy;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;

@end
