@class NSArray, CNAutocompleteQueryCacheMissLogger;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject

@property (retain) CNAutocompleteQueryCacheMissLogger *logger;
@property (copy) NSArray *cachedResults;

- (id)init;
- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)didReturnCachedResults:(id)a0;
- (void)didReturnLiveResults:(id)a0;

@end
