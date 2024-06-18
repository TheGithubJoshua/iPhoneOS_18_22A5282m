@class NSString, ASDServiceBroker;

@interface ASDIAPHistory : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)sharedInstance;

- (id)init;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)a0 withResultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(id /* block */)a0;
- (void)getAllIAPsForActiveAccountWithResultHandler:(id /* block */)a0;

@end
