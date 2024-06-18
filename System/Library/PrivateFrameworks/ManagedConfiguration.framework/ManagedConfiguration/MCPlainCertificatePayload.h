@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSString *certificateFileName;
@property (readonly, retain, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) int dataEncoding;
@property (readonly, retain, nonatomic) NSString *password;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (struct __SecCertificate { } *)copyCertificate;
- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)isSigned;
- (BOOL)isIdentity;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)persistentResourceID;

@end
