@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, CPLFileWatcherDelegate, OS_dispatch_source;

@interface CPLFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate;

- (void)_forceRefreshWatchingNode;
- (void)_stopWatchingParent;
- (id)redactedDescription;
- (id)initWithFileURL:(id)a0 name:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)_stopWatchingNode;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)description;
- (void)_startWatchingNode;
- (void)stopWatching;
- (void)startWatching;
- (void)_startWatchingParent;
- (void)_updateWatchingNode;

@end
