@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol> {
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetForAccountChangeWithCompletionHandler:(id /* block */)a0;
- (id)initWithProxy:(id)a0;
- (void)fetchAndMergeChangesBypassingThrottler:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;

@end
