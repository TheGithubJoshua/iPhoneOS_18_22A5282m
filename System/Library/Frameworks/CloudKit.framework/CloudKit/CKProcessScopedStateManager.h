@class NSMutableDictionary, CKEntitlements, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient> {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_containersRegisteredForAccountChangeNotifications;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedManager;

- (void)clearFakeEntitlementForKey:(id)a0;
- (void)noteSystemIsAvailable;
- (void).cxx_destruct;
- (void)setFakeEntitlement:(id)a0 forKey:(id)a1;
- (void)handleSignificantIssueBehavior:(unsigned long long)a0 reason:(id)a1;
- (void)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 reply:(id /* block */)a2;
- (void)connectionBecameInvalid:(id)a0;
- (id)untrustedEntitlements;

@end
