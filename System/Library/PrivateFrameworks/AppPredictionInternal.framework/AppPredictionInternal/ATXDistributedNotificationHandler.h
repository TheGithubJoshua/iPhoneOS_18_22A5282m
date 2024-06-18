@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (id)init;
- (void)_notificationFired:(id)a0;
- (void)_pruneOldRecents;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (void)registerXPCHandler;
- (void)dealloc;

@end
