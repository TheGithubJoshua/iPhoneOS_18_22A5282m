@class _GEOConfigKeyHelper, NSObject;
@protocol OS_dispatch_queue, GEOConfigChangeListenerDelegate;

@interface _GEOConfigChangedListener : NSObject {
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ block;
    id<GEOConfigChangeListenerDelegate> delegate;
}

- (void).cxx_destruct;
- (id)description;
- (void)callListener;

@end