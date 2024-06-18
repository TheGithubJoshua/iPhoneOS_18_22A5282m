@class AMSMescalFairPlay, NSData, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMescalSession : NSObject {
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sessionWithType:(long long)a0;
+ (id)defaultSession;
+ (id)primeSession;

- (id)_loadCertificateDataWithBag:(id)a0 error:(id *)a1;
- (id)initWithType:(long long)a0;
- (id)_postExchangeData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)_cachedCertData;
- (id)_cachedCertPath;
- (BOOL)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)_shouldRetryFairPlayForError:(id)a0;
- (id)_establishContextWithBag:(id)a0 error:(id *)a1;
- (BOOL)_verifyEntitlements;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (void)_resetSession;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
