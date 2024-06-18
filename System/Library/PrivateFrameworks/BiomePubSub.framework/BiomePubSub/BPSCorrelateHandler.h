@interface BPSCorrelateHandler : NSObject

@property (retain, nonatomic) id context;

+ (id)new;
+ (id)directStreamsAssociationWithBlock:(id /* block */)a0;

- (id)init;
- (void)receiveCurrentEvent:(id)a0;
- (void)receivePriorEvent:(id)a0;
- (void).cxx_destruct;
- (id)correlateWithCurrentEvent:(id)a0;
- (id)initWithInitalContext:(id)a0;
- (id)initWithInitialContext:(id)a0;
- (void)updateContext:(id)a0;

@end
