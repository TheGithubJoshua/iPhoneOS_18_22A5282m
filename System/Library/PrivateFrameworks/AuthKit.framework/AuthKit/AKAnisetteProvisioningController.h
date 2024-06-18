@class NSXPCListenerEndpoint, AKDevice, NSXPCConnection, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAnisetteProvisioningController : NSObject {
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

@property (retain, nonatomic) AKDevice *targetDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;

- (id)_anisetteServiceConnection;
- (id)init;
- (id)initForDevice:(id)a0 provider:(id)a1;
- (void)anisetteDataWithCompletion:(id /* block */)a0;
- (void)anisetteDataForURLRequest:(id)a0 completion:(id /* block */)a1;
- (void)provisionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)anisetteDataWithError:(id *)a0;
- (void)fetchPeerAttestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (void)syncWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)eraseWithCompletion:(id /* block */)a0;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)anisetteDataForURLRequest:(id)a0 error:(id *)a1;

@end
