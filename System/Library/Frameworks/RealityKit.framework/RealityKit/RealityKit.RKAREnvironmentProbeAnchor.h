@interface RealityKit.RKAREnvironmentProbeAnchor : AREnvironmentProbeAnchor {
    void /* unknown type, empty encoding */ refreshInterval;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ weight;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithAnchor:(id)a0;
- (id)initWithTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 name:(id)a2;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 name:(id)a2 hiddenFromPublicDelegate:(BOOL)a3;
- (id)initWithName:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithName:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

@end
