@class PACoalescingIntervalTracker, NSXPCConnection, NSString, PAAccessLoggerState, NSObject;
@protocol OS_dispatch_queue, PAAccessLoggerDelegate;

@interface PAAccessLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PAAccessLoggerState *_state;
    NSString *_enablementChangedNotificationName;
    int _enablementChangedNotificationToken;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) PACoalescingIntervalTracker *coalescingIntervalTracker;
@property (weak) id<PAAccessLoggerDelegate> delegate;
@property long long maxRetryCount;
@property (readonly) BOOL loggingEnabled;

+ (id)sharedInstance;
+ (void)initialize;

- (void)setLoggingEnabled:(BOOL)a0;
- (void)lockedNotifyDidSetLoggingEnabled:(BOOL)a0;
- (void)endIntervalWithSlot:(id)a0 timestampAdjustment:(double)a1;
- (void)withLockedState:(id /* block */)a0;
- (void)notifyDidCoalesceAccess:(id)a0;
- (void)log:(id)a0 reason:(long long)a1;
- (void)log:(id)a0;
- (void)handleConnectionInvalidated;
- (id)initWithConnection:(id)a0 queue:(id)a1 enablementChangedNotificationName:(id)a2;
- (void)ensureEnablementChangedNotificationRegistered;
- (void)lockedInvalidateState;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (id)beginIntervalForAccess:(id)a0;
- (void)notifyDidLogAccess:(id)a0 failedWithError:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (struct ResyncStateResult { id x0; id x1; id x2; })resyncState;
- (void)handleConnectionInterrupted;
- (void)recordAssetIdentifiers:(id)a0 withVisibilityState:(long long)a1 accessEventCount:(unsigned long long)a2 forSlot:(id)a3;

@end
