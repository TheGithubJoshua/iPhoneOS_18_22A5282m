@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (id)init;
- (void)subscribe:(id)a0;
- (void)disassociate:(id)a0;
- (void).cxx_destruct;
- (void)sendValue:(id)a0;
- (void)sendCompletion:(id)a0;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
