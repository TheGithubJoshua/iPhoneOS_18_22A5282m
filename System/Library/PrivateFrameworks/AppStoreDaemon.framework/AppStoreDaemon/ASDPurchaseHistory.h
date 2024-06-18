@class NSString, ASDServiceBroker;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    int _databaseChangedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)sharedInstance;

- (id)init;
- (void)showAllWithCompletionHandler:(id /* block */)a0;
- (void)executeQuery:(id)a0 withResultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateForAccountID:(long long)a0 withContext:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateWithCompletionHandler:(id /* block */)a0;
- (void)updateWithContext:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)updateForAccountID:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)setHidden:(BOOL)a0 forStoreItemID:(long long)a1 withCompletionHandler:(id /* block */)a2;

@end
