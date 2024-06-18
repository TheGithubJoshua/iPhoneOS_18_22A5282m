@interface JPSignatureVerifier : NSObject

@property (nonatomic) struct JetPackSignatureVerifier { } *backing;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc;

+ (id)signatureVerifierWithCertificate:(id)a0;
+ (id)defaultSignatureVerifier;
+ (id)unsafeIgnoreSignatureVerifier;

- (void)dealloc;
- (id)initWithBacking:(struct JetPackSignatureVerifier { } *)a0 releaseOnDealloc:(BOOL)a1;

@end
