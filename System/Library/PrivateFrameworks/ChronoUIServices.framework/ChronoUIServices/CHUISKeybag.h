@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    struct _MKBEvent { } *_mkbRegistrationToken;
    BOOL _queue_isEffectivelyLocked;
}

+ (id)sharedInstance;

- (BOOL)isEffectivelyLocked;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_queue_handleKeybagStatusChanged;
- (void).cxx_destruct;
- (BOOL)_queue_isEffectivelyLocked;
- (void)addObserver:(id)a0;

@end
