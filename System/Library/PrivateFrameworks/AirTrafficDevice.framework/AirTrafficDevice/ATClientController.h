@class NSDictionary;

@interface ATClientController : NSObject {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)a0;

- (id)allClients;
- (void)waitToDrain;
- (BOOL)_loadClientsForDataclasses:(id)a0;
- (void)resetQueues;
- (void)_snapShotWithContext:(id)a0 events:(id)a1;
- (void).cxx_destruct;
- (id)clientForDataclass:(id)a0;
- (void)dealloc;
- (id)queueForClient:(id)a0;

@end
