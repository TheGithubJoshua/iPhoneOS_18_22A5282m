@interface SiriAnalyticsFBFStorage : NSObject {
    void /* unknown type, empty encoding */ applicationIdentifier;
    void /* unknown type, empty encoding */ telemetry;
}

- (id)init;
- (void).cxx_destruct;
- (void)store:(id)a0 completion:(id /* block */)a1;
- (id)initWithApplicationIdentifier:(id)a0 telemetry:(id)a1;

@end
