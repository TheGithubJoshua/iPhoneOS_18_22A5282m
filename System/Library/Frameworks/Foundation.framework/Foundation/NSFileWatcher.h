@class NSFileWatcherObservations, NSMutableDictionary, NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NSFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct { unsigned int val[8]; } _auditToken;
    NSURL *_url;
    id /* block */ _observer;
    BOOL _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream { } *_eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)settle;
- (void)setLastObservedEventID:(unsigned long long)a0;
- (void)stop;
- (void)handleFSEventPath:(id)a0 flags:(unsigned int)a1 id:(unsigned long long)a2;
- (void)setURL:(id)a0;
- (void)start;
- (void)watchItem;
- (id)initWithQueue:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)setObserver:(id /* block */)a0;
- (void)dealloc;
- (void)_coalesceSubitemObservations;
- (void)unsettle;

@end
