@class NSMapTable, NSString, NSArray, NSUUID, SORemoteExtensionViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtension : NSObject <SORemoteExtensionViewControllerDelegate, POExtensionRegistrationProtocol> {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    SORemoteExtensionViewController *_remoteViewController;
    NSMapTable *_extensionDelegates;
}

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (readonly, nonatomic) long long extensionRequestsMode;
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (readonly, nonatomic) int requestCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtension:(id)a0;
- (void)unload;
- (void)registrationDidComplete;
- (void)saveDelegate:(id)a0 forRequestIdentifier:(id)a1;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)canPerformRegistrationCompletion:(id /* block */)a0;
- (void)_finishedSettingUpSession:(id)a0;
- (void)_finishAuthorization:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setupNonUISessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)incrementRequestCount;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)_setupSessionHelperForIOSWithCompletion:(id /* block */)a0;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;
- (void).cxx_destruct;
- (void)requestReauthenticationWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)findDelegateForIdentifier:(id)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)decrementRequestCount;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (void)_setupExtension;
- (id)_contextForSession;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToExtension:(id)a0;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)hasAssociatedDomainsApproved;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)removeDelegateForRequestIdentifier:(id)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)checkAssociatedDomains;
- (struct { unsigned int x0[8]; })auditTokenForSession;

@end
