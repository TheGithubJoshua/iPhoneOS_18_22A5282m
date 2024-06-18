@interface _JEAtomicFlag : NSObject {
    _Atomic BOOL _value;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithInitialValue:(BOOL)a0;
- (BOOL)compareWithValue:(BOOL)a0 andExchangeWithValue:(BOOL)a1;

@end
