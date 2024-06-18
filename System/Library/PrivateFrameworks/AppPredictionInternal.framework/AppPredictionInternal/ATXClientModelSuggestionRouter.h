@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (BOOL)isRoutingConfigurationLoaded;
- (void).cxx_destruct;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;

@end
