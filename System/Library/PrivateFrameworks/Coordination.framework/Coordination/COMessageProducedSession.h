@class COMessageSessionProducer;

@interface COMessageProducedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionProducer *producer;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMember:(id)a0 producer:(id)a1;

@end
