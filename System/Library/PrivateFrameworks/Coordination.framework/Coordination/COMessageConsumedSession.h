@class COMessageSessionConsumer;

@interface COMessageConsumedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionConsumer *consumer;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMember:(id)a0 consumer:(id)a1;

@end
