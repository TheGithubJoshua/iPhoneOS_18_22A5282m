@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)new;
+ (void)initialize;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (void)_observeApplicationStateNotifications;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;

- (void)workWithServiceSemaphore:(id /* block */)a0;
- (id)init;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (id)createRequest;
- (void).cxx_destruct;
- (void)ensureFullyInitialized;
- (id)newRequest;
- (id)indexVersionId;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (id)retrieveCapabilites;
- (void)capabilitiesWithReply:(id /* block */)a0;

@end
