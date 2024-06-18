@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject

@property (retain, nonatomic) NSArray *policies;

+ (id)defaultPolicy;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
