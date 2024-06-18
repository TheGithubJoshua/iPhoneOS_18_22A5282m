@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

- (id)certificates;
- (id)initWithCoder:(id)a0;
- (id)user;
- (BOOL)hasPassword;
- (const struct _CFURLCredential { } *)_CFURLCredential;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (void)_removeSWCACreatorAttribute;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (struct __SecIdentity { } *)identity;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)password;
- (const struct _CFURLCredential { } *)_cfurlcredential;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasSWCACreatorAttribute;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { } *)a0;

@end
