@interface SiriActivationAssertion : SiriActivationSource

@property (nonatomic) unsigned long long reason;

- (void)_setConnection:(id)a0;
- (id)connection;
- (id)initWithIdentifier:(id)a0 reason:(unsigned long long)a1;
- (void)invalidatedAtTimestamp:(double)a0;
- (void)invalidate;
- (void)configureConnection;
- (void)dealloc;

@end
