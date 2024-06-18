@interface DMCPowerAssertion : DMCProcessAssertion

@property (readonly, nonatomic, getter=isParked) BOOL parked;

- (id)initWithReason:(id)a0;
- (void)park;
- (void)unpark;
- (void)dealloc;

@end
