@class FCUserEventHistoryPruningPolicies;

@interface FCUserEventHistoryTrackingConfiguration : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) FCUserEventHistoryPruningPolicies *pruningPolicies;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
