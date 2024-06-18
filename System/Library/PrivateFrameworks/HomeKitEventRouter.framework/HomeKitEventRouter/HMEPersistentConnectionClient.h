@class NSObject;
@protocol OS_os_log, HMEPersistentConnectionClientDelegate;

@interface HMEPersistentConnectionClient : HMERouterClient {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionClientDelegate> delegate;

- (BOOL)isActiveForSaving;
- (id)forwardingTopicsForTopics:(id)a0;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (void)didReconnect;
- (void).cxx_destruct;
- (void)processReceivedEventsFromMessage:(id)a0;
- (unsigned long long)willWriteToStore;
- (id)initWithQueue:(id)a0;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (void)didInvalidateConnection;
- (void)processReceivedCachedEventsFromMessage:(id)a0;

@end
