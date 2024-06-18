@class NSDictionary, NSTimer, NSLock, NSMutableArray;

@interface VSCacheUpdateListener : NSObject {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListenerIfExists;
+ (id)sharedListener;

- (void)startListening;
- (id)init;
- (void)stopListening;
- (id)_initShared;
- (void)_enqueueRequest:(id)a0;
- (void)_flush;
- (void)dealloc;
- (void)performUpdateForModelIdentifier:(id)a0 classIdentifier:(id)a1;
- (void)_spokenLanguageChanged:(id)a0;

@end
