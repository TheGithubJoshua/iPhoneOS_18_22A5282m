@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)layoutForRequest:(id)a0;
- (id)suggestionLayoutFromCache;
- (void)setupRemoteClientXPCConnection;
- (id)remoteSyncBlendingLayerServer;
- (void)dealloc;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (id)initWithConsumerSubType:(unsigned char)a0;

@end
