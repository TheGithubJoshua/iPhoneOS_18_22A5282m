@class SFAutoUnlockManager, NSString, NSObject;
@protocol OS_dispatch_queue, SFAuthenticationManagerDelegate;

@interface SFAuthenticationManager : NSObject <SFAutoUnlockManagerDelegate, SFUnlockClientProtocol>

@property (readonly, nonatomic) SFAutoUnlockManager *autoUnlockManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SFAuthenticationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authenticateForType:(unsigned long long)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)cancelAuthenticationSessionWithID:(id)a0;
- (BOOL)isEnabledForType:(unsigned long long)a0;
- (void)enabledDevice:(id)a0;
- (void)manager:(id)a0 failedAttemptWithError:(id)a1;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)manager:(id)a0 beganAttemptWithDevice:(id)a1;
- (void)failedUnlockWithError:(id)a0;
- (void)listEligibleDevicesForType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)beganAttemptWithDevice:(id)a0;
- (void)completedAuthenticationSessionWithID:(id)a0;
- (void)startedAuthenticationSessionWithID:(id)a0;
- (BOOL)isSupportedForType:(unsigned long long)a0;
- (id)initWithQueue:(id)a0;
- (void)manager:(id)a0 completedUnlockWithDevice:(id)a1;
- (void)failedAuthenticationSessionWithID:(id)a0 error:(id)a1;

@end
