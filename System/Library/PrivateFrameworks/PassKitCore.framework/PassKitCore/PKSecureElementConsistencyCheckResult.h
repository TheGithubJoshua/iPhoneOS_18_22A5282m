@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyCheckResult : NSObject

@property (readonly, nonatomic) NSArray *requestedActions;
@property (readonly, nonatomic) long long cleanupActions;
@property (readonly, nonatomic) NSDictionary *summary;
@property (readonly, nonatomic) NSArray *registerRegions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCleanupActions:(long long)a0 resultsSummary:(id)a1 requestedActions:(id)a2 registeredRegions:(id)a3;

@end
