@interface UIRuntimeEventConnection : UIRuntimeConnection

@property unsigned long long eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (id)initWithCoder:(id)a0;
- (void)connect;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)connectForSimulator;

@end
