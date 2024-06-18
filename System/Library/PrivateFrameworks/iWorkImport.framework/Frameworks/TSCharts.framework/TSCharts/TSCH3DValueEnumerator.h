@interface TSCH3DValueEnumerator : NSObject {
    struct ValueEnumerator { BOOL _forward; unsigned long long _index; unsigned long long _max; double _value; } _imp;
}

@property (readonly, nonatomic) double value;

- (id)nextObject;
- (unsigned long long)index;
- (void)setValue:(double)a0;
- (id)enumerator;
- (BOOL)isValid;
- (id).cxx_construct;
- (BOOL)isValidNonZero;

@end
