@class _SFCredentialStore, NSObject;
@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;
@property (readonly) _SFCredentialStore *credentialStore;

+ (id)defaultManager;
+ (id)defaultOverCommitManager;

- (struct __CFDictionary { } *)_certificateAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1;
- (void)identityForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (void)removeItemWithIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (id)foundPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 certificate:(id)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)findPrivateKeyWithIdentifier:(id)a0 certificate:(id *)a1 attributes:(struct __CFDictionary **)a2 result:(int *)a3;
- (void)setData:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (id)initOverCommitManager;
- (void)keyForIdentifier:(id)a0 specifier:(id)a1 resultHandler:(id /* block */)a2;
- (BOOL)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 error:(id *)a3;
- (struct __CFDictionary { } *)_publicKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (struct __CFDictionary { } *)_commonKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)dataForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)identityForIdentifier:(id)a0;
- (struct __CFDictionary { } *)_privateKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (int)generateAttributesForIdentityAndAddToKeychain:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2;
- (void)setKey:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (id)publicKeyLookupWithIdentifier:(id)a0 certificate:(id)a1 result:(int)a2;
- (void)keysFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (id)initManager;
- (void)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (id)_symmetricKeyAttributesForIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)identitiesFilteredBy:(id)a0 resultHandler:(id /* block */)a1;

@end
