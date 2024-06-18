@class _DKEventQuery;
@protocol _DKKnowledgeQuerying;

@interface BPSKnowledgeStorePublisher : BPSPublisher

@property (readonly, nonatomic) _DKEventQuery *query;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> store;

+ (id)new;

- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventQuery:(id)a0 knowledgeStore:(id)a1;

@end
