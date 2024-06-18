@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (id)init;
- (double)time;
- (void)setTime:(double)a0;
- (void)setContext:(id)a0;
- (id)context;
- (id)stream;
- (void)dealloc;
- (void)setStream:(id)a0;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;
- (id)domainOfDefinition;
- (id)evaluateWithOptions:(id)a0;
- (unsigned long long)fieldOrder;
- (BOOL)supportsContextType:(int)a0;

@end
