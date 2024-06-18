@interface TRISignatureKey : NSObject {
    struct __SecKey { } *_key;
}

+ (struct __SecKey { } *)_keyFromCertificateChain:(id)a0;
+ (id)keyFromData:(id)a0;

- (id)init;
- (BOOL)_validateBase64Signature:(id)a0 data:(id)a1 algorithm:(const struct __CFString { } *)a2;
- (id)initWithKey:(struct __SecKey { } *)a0;
- (BOOL)_validateSignature:(id)a0 data:(id)a1 algorithm:(const struct __CFString { } *)a2;
- (BOOL)validateBase64Signature:(id)a0 data:(id)a1;
- (void)dealloc;
- (BOOL)validateBase64Signature:(id)a0 forFile:(id)a1;

@end
