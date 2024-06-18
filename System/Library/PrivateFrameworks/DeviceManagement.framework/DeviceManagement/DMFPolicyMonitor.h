@class NSMutableDictionary, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int firstUnlockToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;

+ (BOOL)hasFirstUnlocked;
+ (const char *)mobileKeyBagFirstUnlockNotificationName;
+ (id)remoteInterface;
+ (id)policyMonitor;

- (id)init;
- (id)initWithXPCConnection:(id)a0;
- (void)invalidatePolicyMonitor:(id)a0;
- (void)addRegistration:(id)a0 forPolicyMonitorIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestPoliciesForTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)requestPoliciesForTypes:(id)a0 withError:(id *)a1;
- (void)dealloc;
- (void)_dispatchRequest:(id /* block */)a0;

@end
