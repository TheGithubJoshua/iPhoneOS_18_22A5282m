@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFPineBoardSystemStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_pineBoardStateGroup;
    long long _pineBoardStateGroupDepth;
    NSHashTable *_listeners;
}

@property (readonly, nonatomic) long long pineBoardSystemState;

+ (id)defaultObserver;

- (void)_beginGroup;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)_startObservingPineBoardSystemState;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_handlePineBoardStateChange:(long long)a0;
- (void)_endGroup;

@end
