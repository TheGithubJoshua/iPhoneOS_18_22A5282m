@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *deferredActions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts;
@property (retain, nonatomic) NSMutableDictionary *deferredAddedPaymentPasses;

+ (id)sharedDeferredActionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)deferredPaymentPassesForDevice:(id)a0;
- (void)_cleanUpDeferredDataForPairingID:(id)a0;
- (void)_handleCompanionAgentStarted;
- (void)_handleDeviceBecameActive:(id)a0;
- (void)_handleDevicePaired:(id)a0;
- (void)_handleDevicePairingFailure:(id)a0;
- (void)_handleDeviceUnpaired:(id)a0;
- (void)_performDeferredActions;
- (void)addDeferredPaymentPass:(id)a0 forDevice:(id)a1;
- (id)deferredPaymentPassUniqueIDsForDevice:(id)a0 excludingDeactivated:(BOOL)a1;
- (id)deferredPaymentPassWithUniqueID:(id)a0 forDevice:(id)a1;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)a0;
- (void)performActionWhenCompanionAgentIsAvailable:(id /* block */)a0 forDevice:(id)a1;
- (void)setDeferredSharedPaymentWebServiceContext:(id)a0 forDevice:(id)a1;

@end
