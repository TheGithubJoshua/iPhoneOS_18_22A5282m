@class NSUUID, NSString, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate>

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithExtension:(id)a0 queue:(id)a1 volumeManager:(id)a2;
+ (id)instanceWithExtension:(id)a0 queue:(id)a1 server:(id)a2 volumeManager:(id)a3;
+ (id)instanceWithExtension:(id)a0 queue:(id)a1 server:(id)a2;

- (id)initWithExtension:(id)a0 queue:(id)a1 server:(id)a2 volumeManager:(id)a3;
- (void)didReceiveMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAppExtensionReachable;
- (void)reindexAllSearchableItemsForRequest:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (id)asAppExtensionBackedProvider;
- (id)customPushTopics;
- (void)removeTrashedItemsOlderThanDate:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;

@end
