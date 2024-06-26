@class NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue, WFUserInfoManagerDelegate;

@interface WFUserInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *encryptedStore;
@property (retain, nonatomic) id<WFUserInfoManagerDelegate> delegate;

- (id)init;
- (void)encryptedStoreChanged:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)readUserIdentifierAndNotify;
- (void)dealloc;

@end
