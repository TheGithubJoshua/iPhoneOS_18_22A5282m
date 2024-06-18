@class APSConnection, NSString, NSObject;
@protocol OS_dispatch_queue, MAPushServiceConnectionDelegate;

@interface MAPushServiceConnection : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly, nonatomic) id<MAPushServiceConnectionDelegate> delegate;
@property (readonly, nonatomic) APSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)_subscribeToChannel:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)_publicChannelForPushChannel:(id)a0;
- (id)subscribedChannels;
- (void)_unsubscribeFromChannel:(id)a0;
- (void).cxx_destruct;
- (id)_APSConnectionEnvironment;
- (void)subscribeToChannel:(id)a0;
- (void)dealloc;
- (unsigned long long)_subscribedChannelCount;
- (void)unsubscribeFromChannel:(id)a0;

@end
