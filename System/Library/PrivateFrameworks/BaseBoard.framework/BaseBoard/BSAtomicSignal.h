@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)signal;
- (id)init;
- (id)description;
- (BOOL)hasBeenSignalled;

@end
