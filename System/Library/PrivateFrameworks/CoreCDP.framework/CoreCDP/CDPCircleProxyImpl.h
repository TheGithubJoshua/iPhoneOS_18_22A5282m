@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (id)pairingChannelInitiator;
- (id)initWithContext:(id)a0;
- (void)waitForUpdate;
- (BOOL)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (void)reportSuccess;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (id)peerDeviceNamesByPeerID;
- (BOOL)waitForInitialSync:(id *)a0;
- (void)reportFailure:(id)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (int)_sos_circleStatus:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (int)cachedSOSCircleStatus:(id *)a0;
- (BOOL)hasNonViewAwarePeers;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (id)contextType;
- (BOOL)tryRegisteringCredentials;
- (BOOL)registerCredentialsIfMissing;
- (long long)_cliqueStatus:(id *)a0;
- (void).cxx_destruct;
- (BOOL)registerCredentials;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (id)pairingChannelAcceptor;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (id)_pairingChannelContext;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (BOOL)canAuthenticate;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (id)peerId;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (BOOL)synchronizeCircleViews;
- (int)sos_circleStatus:(id *)a0;

@end
