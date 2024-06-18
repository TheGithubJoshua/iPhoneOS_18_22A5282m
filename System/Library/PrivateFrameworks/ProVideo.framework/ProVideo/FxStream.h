@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (id)init;
- (id)provider;
- (void)dealloc;
- (id)pin;
- (void)setPin:(id)a0;
- (id)createSampleAtTime:(double)a0;

@end
