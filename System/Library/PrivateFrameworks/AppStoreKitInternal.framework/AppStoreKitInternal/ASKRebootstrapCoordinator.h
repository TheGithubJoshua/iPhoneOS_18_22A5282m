@class NSHashTable, ASKStorefrontChangeProvider;

@interface ASKRebootstrapCoordinator : NSObject

@property (class, readonly) ASKRebootstrapCoordinator *sharedCoordinator;

@property (readonly, nonatomic) ASKStorefrontChangeProvider *changeObserver;
@property (readonly, nonatomic) NSHashTable *handlerTokens;
@property (copy, nonatomic) id /* block */ appBootstrapHandler;
@property (nonatomic) long long delayCount;
@property (nonatomic) BOOL hasPendingNotification;

- (id)init;
- (void)notify;
- (void)endDelayingNotifications;
- (void)registerAppBootstrapHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)simulateStorefrontChange;
- (void)beginDelayingNotifications;
- (void)scheduleNotification;
- (id)registerCleanupHandler:(id /* block */)a0;

@end
