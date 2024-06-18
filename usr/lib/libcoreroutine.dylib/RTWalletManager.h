@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;
@property (retain, nonatomic) PKUsageNotificationClient *passKitClient;

+ (long long)passUseSourceFromUsageNotificationSource:(long long)a0;

- (void)_unregisterForNotifications;
- (id)initWithDefaultsManager:(id)a0;
- (void)onDefaultsUpdate:(id)a0;
- (void)_paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (id)init;
- (void)paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)_registerForNotifications;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_setup;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_registerPaymentUseCallbacks;
- (void)_unregisterPaymentUseCallbacks;
- (void).cxx_destruct;
- (void)_passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (void)_registerPassUseCallbacks;
- (void)passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (void)_unregisterPassUseCallbacks;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;

@end
