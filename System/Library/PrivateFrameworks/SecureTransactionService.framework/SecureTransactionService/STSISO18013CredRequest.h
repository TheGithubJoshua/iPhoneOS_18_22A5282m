@class NSDictionary, NSData, ISO18013TerminalAuthInfo;

@interface STSISO18013CredRequest : STSCredentialRequest <NSSecureCoding> {
    NSDictionary *_requestByNamespace;
    NSData *_authACL;
    ISO18013TerminalAuthInfo *_readerAuthInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
