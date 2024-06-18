@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)init;
- (unsigned long long)stride;
- (unsigned long long)stepRate;
- (void)setStepFunction:(unsigned long long)a0;
- (void)setStepRate:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStride:(unsigned long long)a0;
- (unsigned long long)stepFunction;

@end
