@interface PADCounter : NSObject {
    unsigned long long _counter;
}

- (void)decrement;
- (id)init;
- (void)increment;
- (unsigned long long)getValue;
- (void)setToValue:(unsigned long long)a0;
- (void)decrementByValue:(unsigned long long)a0;
- (void)incrementByValue:(unsigned long long)a0;

@end
