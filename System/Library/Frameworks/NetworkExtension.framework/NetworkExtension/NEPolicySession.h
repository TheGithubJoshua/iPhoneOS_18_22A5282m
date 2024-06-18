@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)initFromPrivilegedProcess;
- (id)initWithSocket:(int)a0;
- (BOOL)removeAllPolicies;
- (unsigned long long)addPolicy:(id)a0;
- (id)policyWithID:(unsigned long long)a0;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (BOOL)registerServiceUUID:(id)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)removeAllDomainFilters;
- (id)dumpKernelPolicies;
- (BOOL)apply;
- (BOOL)lockSessionToCurrentProcess;
- (int)dupSocket;
- (void)dealloc;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (BOOL)unregisterServiceUUID:(id)a0;
- (id)initWithSessionName:(id)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;

@end
