@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)getFlag;
- (id)init;
- (BOOL)setFlag:(BOOL)a0;
- (id)initWithFlag:(BOOL)a0;
- (id)description;

@end
