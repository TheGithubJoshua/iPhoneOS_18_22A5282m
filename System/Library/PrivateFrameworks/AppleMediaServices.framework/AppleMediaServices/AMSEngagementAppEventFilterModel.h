@class NSDictionary;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly, nonatomic) unsigned long long components;

+ (BOOL)matchEvent:(id)a0 toFilter:(id)a1;

- (id)init;
- (id)initWithCacheObject:(id)a0;
- (BOOL)matchesEvent:(id)a0;
- (id)exportObject;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;

@end
