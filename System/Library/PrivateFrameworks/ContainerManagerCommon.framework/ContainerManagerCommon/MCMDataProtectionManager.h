@class NSObject;
@protocol OS_dispatch_queue;

@interface MCMDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *protectionOperationFileQueue;

+ (id)defaultManager;

- (id)init;
- (void)_startDataProtectionChangeOperation:(id)a0 withCompletion:(id /* block */)a1;
- (void)setDataProtectionOnDataContainerForMetadata:(id)a0 isSecondOrThirdPartyApp:(BOOL)a1 retryIfLocked:(BOOL)a2 deferUntilNextLaunch:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)restartPendingDataProtectionOperationsWithError:(id *)a0;
- (int)intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)a0 clientIdentity:(id)a1 containerClass:(unsigned long long)a2 info:(id)a3;
- (int)desiredDataProtectionClassForMetadata:(id)a0 clientIdentity:(id)a1;

@end
