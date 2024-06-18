@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary *_contextsForTokens;
    unsigned long long _currentToken;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackContextRegistry;

- (id)init;
- (void *)registerCallbackContextObject:(id)a0;
- (void)unregisterCallbackContextForToken:(void *)a0;
- (void)dealloc;
- (id)callbackContextForToken:(void *)a0;

@end
