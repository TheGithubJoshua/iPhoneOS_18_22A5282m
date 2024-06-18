@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (id)init;
- (void)_shutdownServer;
- (void)_stopListening;
- (void)nothing;
- (void)startCenter:(id)a0;
- (id)_collateContexts;
- (void)removeContextProvider:(id)a0;
- (void).cxx_destruct;
- (id)_serverName;
- (void)_startListening;
- (void)dealloc;
- (BOOL)addContextProvider:(id)a0;
- (void)_collateContextsIntoArray:(id)a0;

@end
