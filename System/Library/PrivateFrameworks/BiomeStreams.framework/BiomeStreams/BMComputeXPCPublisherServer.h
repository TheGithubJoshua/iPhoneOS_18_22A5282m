@class NSObject, NSXPCListener, NSString, NSXPCInterface, BMBookmarkStorage, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface BMComputeXPCPublisherServer : NSObject <BMComputePublisher, NSXPCListenerDelegate>

@property (copy, nonatomic) id /* block */ activationCompletion;
@property (readonly, nonatomic) NSMutableArray *subscriptions;
@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)initWithQueue:(id)a0 listener:(id)a1;
- (id)init;
- (void)subscribe:(id)a0;
- (void)unsubscribeWithIdentifier:(id)a0;
- (void)_removeSubscriptionWithToken:(unsigned long long)a0;
- (id)subscriptionsForStream:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)receiveInputForSubscription:(id)a0 streamIdentifier:(id)a1 storeEvent:(id)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)_addSubscription:(id)a0;
- (void)_removeSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (void)_handlePublisherAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;

@end
