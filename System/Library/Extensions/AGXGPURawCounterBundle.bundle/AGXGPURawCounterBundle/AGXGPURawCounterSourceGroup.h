@interface AGXGPURawCounterSourceGroup : _GPURawCounterSourceGroup {
    struct AGXGPURawCounter { void /* function */ **x0; } *_impl;
}

- (id)initWithAcceleratorPort:(unsigned int)a0;
- (void)setOptions:(id)a0;
- (void)dealloc;
- (BOOL)stopSampling;
- (unsigned long long)sampleMarker;
- (BOOL)startSampling;
- (id)subDivideCounterList:(id)a0 withOptions:(id)a1;

@end
