@class NSMutableDictionary, ICAgeVerificationState, NSObject;
@protocol OS_dispatch_queue;

@interface ICAgeVerificationManager : NSObject

@property (class, readonly, nonatomic) ICAgeVerificationManager *defaultManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSMutableDictionary *ageVerificationStateInternal;
@property (readonly, nonatomic) ICAgeVerificationState *ageVerificationState;

- (void)_userIdentityStoreDidChange:(id)a0;
- (void)getAgeVerificationStateWithCompletion:(id /* block */)a0;
- (void)_registerForNotifications;
- (id)_init;
- (BOOL)_bagHasValidKeys:(id)a0;
- (void)_updateAgeVerificationStateAndSendNotification:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getAgeVerificationStateForUserIdentity:(id)a0 completion:(id /* block */)a1;
- (void)_updateAgeVerificationStateForUserIdentity:(id)a0 sendNotification:(BOOL)a1 completion:(id /* block */)a2;
- (id)ageVerificationStateForUserIdentity:(id)a0;
- (BOOL)_processAgeVerificationState:(id)a0 forDSID:(id)a1;
- (void)_runAgeVerificationForUserIdentity:(id)a0 completion:(id /* block */)a1;

@end
