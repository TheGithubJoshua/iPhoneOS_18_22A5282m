@class _NSKeyValueObjectAndKeyPair;

@interface _NSKeyValueReturnedValueConsistencyStats : NSObject {
    _NSKeyValueObjectAndKeyPair *_pair;
    BOOL _capturedInitialValue;
    id _weakCurrentValue;
    id _copiedCurrentValue;
    long long _checkCount;
}

- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (void)dealloc;

@end
