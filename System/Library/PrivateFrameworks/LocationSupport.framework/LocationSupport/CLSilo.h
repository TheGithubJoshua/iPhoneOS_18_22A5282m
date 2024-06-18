@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (void)setGlobalConfiguration:(id)a0;
+ (id)globalConfiguration;
+ (id)main;

- (void)assertOutside;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)sync:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (BOOL)isSuspended;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)suspend;
- (id)initWithIdentifier:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (void)runIdleHandlers;
- (void).cxx_destruct;
- (void)intendToSync;
- (id)debugDescription;
- (void)resume;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldBeIdled;
- (void)assertInside;
- (void)runResumeHandlers;
- (id)newTimer;

@end
