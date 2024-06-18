@class NSMutableArray, PDPeerPaymentWebServiceCoordinator, NSObject, PDPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
}

@property (readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;

- (id)init;
- (id)initWithPaymentWebServiceCoordinator:(id)a0 peerPaymentWebServiceCoordinator:(id)a1;
- (void)_performDeviceRegistrationWithRegistrationTask:(id)a0 completion:(id /* block */)a1;
- (void)_peerPaymentRegisterWithURL:(id)a0 paymentWebService:(id)a1 forceRegister:(BOOL)a2 completion:(id /* block */)a3;
- (void)notePasscodeChanged;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 action:(long long)a2 forceApplePayRegister:(BOOL)a3 forcePeerPaymentRegister:(BOOL)a4 completion:(id /* block */)a5;
- (void)_canAutomaticallyRegisterWithWebService:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handlePaymentWebServiceContextChanged:(id)a0;
- (void)dealloc;
- (BOOL)_shouldAttemptPeerPaymentRegistrationForce:(BOOL)a0;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)a0 context:(id)a1 error:(id)a2;
- (void)_createTransactionAndPerformDeviceRegistrationWithRegistrationTask:(id)a0;

@end
