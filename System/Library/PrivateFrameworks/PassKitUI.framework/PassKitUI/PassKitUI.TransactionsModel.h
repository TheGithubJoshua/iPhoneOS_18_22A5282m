@interface PassKitUI.TransactionsModel : NSObject <PKPaymentServiceDelegate> {
    void /* unknown type, empty encoding */ wrappedPass;
    void /* unknown type, empty encoding */ _transactions;
    void /* unknown type, empty encoding */ _notificationServiceUpdatesEnabled;
    void /* unknown type, empty encoding */ paymentService;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)passSettingsDidChangeWithNotification:(id)a0;

@end
