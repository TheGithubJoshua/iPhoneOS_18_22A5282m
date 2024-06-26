@class NSString, AARemoteServer, AAAttestationSigner, AKAppleIDSession, NSObject, AAAbsintheSigner;
@protocol OS_dispatch_queue;

@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext> {
    AKAppleIDSession *_appleIDSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AAAbsintheSigner *absintheSigner;
@property (retain, nonatomic) AAAttestationSigner *attestationSigner;
@property (retain, nonatomic) AARemoteServer *remoteServer;
@property (readonly, nonatomic) BOOL requiresSigning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_relevantHTTPStatusCodes;

- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (id)_initRequiringSigning:(BOOL)a0 appleIDSession:(id)a1;
- (void)_additionalAbsintheHeadersForData:(id)a0 completion:(id /* block */)a1;
- (id)relevantHTTPStatusCodes;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initRequiringSigning:(BOOL)a0;
- (void)_additionalHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_additionalAttestationHeadersForData:(id)a0 withValidity:(id)a1 completion:(id /* block */)a2;

@end
