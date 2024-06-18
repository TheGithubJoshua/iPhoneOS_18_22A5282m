@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (long long)decrement;
- (id)init;
- (unsigned long long)hash;
- (long long)increment;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithInitialValue:(long long)a0;

@end
