@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (void)flushSharedNotifier;
+ (id)sharedNotifier;

- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;
- (void).cxx_destruct;
- (void)waitForCurrentTasksToFinish;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)dealloc;
- (void)willSaveChanges;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;

@end
